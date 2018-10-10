//
// Created by Kenny Daily on 10/9/2018.
//

#ifndef CHESS_KNIGHT_H
#define CHESS_KNIGHT_H

#include "Piece.h"

class Knight : public Piece {
public:
	Knight();
	Knight(int x, int y, int white);	//first int represents x (letter side)
										//second repreents y (number side)
										//third represents team - white is 1, black is 2, neither is 0
										//sets representation as E and sets value as 0 and sets
};


#endif //CHESS_KNIGHT_H
