//
// Created by Kenny Daily on 10/11/2018.
//

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
	// algorithm outline?

	// checks if castling

	// if not castling ---
	// checks if piece referenced is a valid piece (on team and a real piece type)
	// if piece is valid piece, stores which it is
	// checks if initial location of piece has a piece of the given type
	// if start is valid, stores the specific piece
	// checks if target move is within bounds of board
	// checks if target move skips over pieces unfairly
	// checks if target move puts king in check (keeps this stored, just in case puts enemy in check or checkmate)
	// if none of the above are true moves piece returns isCheckMove that was stored (-1 if no check, 0-3 if check/mate)
	// if any invalid, returns given integer so this is known

	// if castling ---
	// checks if pieces are in the way
	// checks if king is in check
	// checks if would put king in check
	// checks if king passes through any attacked squares along the way
	// checks if king has moved yet
	// checks if given rook has moved yet
	// if move is legal by above conditions returns isCheckMove (-1 if no check, 0-3 check/mate)
	// if move illegal, indicates by returning a given int indicating which if failed in above order
}