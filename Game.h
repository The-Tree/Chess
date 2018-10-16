//
// Created by Kenny Daily on 10/11/2018.
//

#ifndef CHESS_GAME_H
#define CHESS_GAME_H

#include <vector>
#include "string.h"
#include "Board.h"

class Game {
private:
	Board gameBoard;
	std::vector<std::string> moveSet; //vector of all of the moves in pgn format
	int whitePlayer; //whitePlayer (0 if human player, 1 if ai player)
	int blackPlayer;
	int playerTurn; //whos turn it is - whiteplayer [1] or blackplayer [2]

public:
	Game();
	Game(int whitePlayer, int blackPlayer); //only input is if whiteplayer and blackplayer are human or ai
	Game(std::string file, int whitePlayer1, int blackPlayer2); //takes in a pgn file for the game to initialize game as
	void makeMove(std::string move); 	//given a string
										//interprets the string input, and makes the move if it is a valid one

};


#endif //CHESS_GAME_H
