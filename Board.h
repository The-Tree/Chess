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
	void makeMove(char move[]); //recieves a string that is algebraic notation of the intended move
	bool legalMove(char move[], int team);	//checks if the move is legal
											//(eg checks if king in move is only moving onesquare)
											//also checks if the move is legal for the team specified
};


#endif //CHESS_BOARD_H
