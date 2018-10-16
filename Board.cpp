//
// Created by Kenny Daily on 10/5/2018.
//

#include <iostream>
#include "Board.h"
#include "Pieces/Empty.h"
#include "Pieces/Pawn.h"
#include "Pieces/Knight.h"
#include "Pieces/Bishop.h"
#include "Pieces/Rook.h"
#include "Pieces/King.h"
#include "Pieces/Queen.h"
#include "Pieces/Piece.h"

Board::Board() {
	//black team
	board[0][0] = Rook(0, 0, 2);
	board[0][1] = Knight(1, 0, 2);
	board[0][2] = Bishop(2, 0, 2);
	board[0][3] = Queen(3, 0, 2);
	board[0][4] = King(4, 0, 2);
	board[0][5] = Bishop(5, 0, 2);
	board[0][6] = Knight(6, 0, 2);
	board[0][7] = Rook(7, 0, 2);
	for(int x = 0; x < WIDTH; x++) {
		board[1][x] = Pawn(x, 1, 2);
	}

	//empty squares
	for(int y = 2; y < HEIGHT-2; y++) {
		for(int x = 2; x < WIDTH; x++) {
			Board::board[y][x] = Empty(x, y);
		}
	}

	//white team
	for(int x = 0; x < WIDTH; x++) {
		board[6][x] = Pawn(x, 6, 1);
	}
	board[7][0] = Rook(0, 7, 1);
	board[7][1] = Knight(1, 7, 1);
	board[7][2] = Bishop(2, 7, 1);
	board[7][3] = Queen(3, 7, 1);
	board[7][4] = King(4, 7, 1);
	board[7][5] = Bishop(5, 7, 1);
	board[7][6] = Knight(6, 7, 1);
	board[7][7] = Rook(7, 7, 1);
}

void Board::printBoard() {
	for(int y = 0; y < HEIGHT; y++) {
		std::cout << "|";
		for(int x = 0; x < WIDTH; x++) {
			std::cout << board[y][x].getRep() << "|";
		}
		std::cout << " " << (8-y) << std::endl;
	}
	std::cout << "-";
	for(int i = 0; i < WIDTH; i++) {
		std::cout << (char)(i + 65) << "-";
	}
	std::cout << std::endl;
}

Piece Board::findPiece(int x, int y) {
	return board[y][x];
}

void Board::movePiece(int x1, int y1, int x2, int y2) {
	board[y2][x2] = board[y1][x1];
	board[y2][x2].setX(x2);
	board[y2][x2].setY(y2);

	board[y1][x1] = Empty(x1, y1);
}