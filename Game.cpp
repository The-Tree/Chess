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