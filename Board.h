//
// Created by Kenny Daily on 10/5/2018.
//

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H


#include "Pieces/Piece.h"

class Board {
private:
	const static int HEIGHT = 8; //the height of the board
	const static int WIDTH = 8; //the width of the board
	Piece board[HEIGHT][WIDTH]; //the board of pieces

public:
	Board();
	void printBoard();
	Piece findPiece(int x, int y); //given a coordinate on the board and returns the Piece at that position
	void movePiece(int x1, int y1, int x2, int y2); //recieves two coordinates, of the start and end point of the move
	bool legalMove(int x1, int y1, int x2, int y2, int team);	//checks if the move is legal
																//(eg checks if king in move is only moving onesquare)
																//also checks if the move is legal for the team specified
};


#endif //CHESS_BOARD_H
