//
// Created by Kenny Daily on 10/11/2018.
//

#include <ctype.h>
#include "Game.h"

Game::Game() {
	gameBoard = Board();
	whitePlayer = 0;
	blackPlayer = 0;
	playerTurn = 1;
}

Game::Game(int whitePlayer1, int blackPlayer2) {
	gameBoard = Board();
	whitePlayer = whitePlayer1;
	blackPlayer = blackPlayer2;
	playerTurn = 1;
}

int Game::makeMove(std::string move, int team) {
	if(move.compare("O-O") == 0 || move.compare("O-O-O") == 0) { // if castling ---
		// checks if given rook is in right position
		// checks if pieces are in the way
		// checks if king is in check
		// checks if would put king in check
		// checks if king passes through any attacked squares along the way
		// checks if king has moved yet
		// if move is legal by above conditions returns isCheckMove (-1 if no check, 0-3 check/mate)
		// if move illegal, indicates by returning a given int indicating which if failed in above order
	}
	else { // if not castling ---
		if(move.at(0) == 'K' || move.at(0) == 'Q' || move.at(0) == 'R' || move.at(0) == 'N' || move.at(0) == 'B' ||
				move.at(0) == 'P') { //if piece is given or indicated directly

		}
		else if (islower(move.at(0)) || isdigit(move.at(0))){ 	//if the first char isdigit or islower, it may be a pos
																//if no piece directly indicated (PGN says it is a pawn)

		}
		else { //if move is illegal due to indicating a nonvalid piece or using an invalid character

		}

		// checks if initial location of piece has a piece of the given type (if the initial location is given)
		// if start is valid, stores the specific piece
		// checks if target move is within bounds of board
		// checks if target move skips over pieces unfairly
		// checks if target move puts king in check (keeps this stored, just in case puts enemy in check or checkmate)
		// if none of the above are true moves piece returns isCheckMove that was stored (-1 if no check, 0-3 if check/mate)
		// if any invalid, returns given integer so this is known
	}
}