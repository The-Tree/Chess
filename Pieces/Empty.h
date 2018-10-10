//
// Created by Kenny Daily on 10/5/2018.
//

#ifndef CHESS_EMPTY_H
#define CHESS_EMPTY_H

#include "Piece.h"

class Empty : public Piece {
public:
	Empty();
	Empty(int x, int y);	//first int represents x (letter side)
							//second repreents y (number side)
							//third represents team - white is 1, black is 2, neither is 0
							//sets representation as E and sets value as 0 and sets
};


#endif //CHESS_EMPTY_H
