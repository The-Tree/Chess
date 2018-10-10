//
// Created by Kenny Daily on 10/9/2018.
//

#ifndef CHESS_ROOK_H
#define CHESS_ROOK_H

#include "Piece.h"

class Rook : public Piece {
public:
	Rook();
	Rook(int x, int y, int white);	//first int represents x (letter side)
									//second repreents y (number side)
									//third represents team - white is 1, black is 2, neither is 0
									//sets representation as E and sets value as 0 and sets
};


#endif //CHESS_ROOK_H
