//
// Created by Kenny Daily on 10/9/2018.
//

#include "Bishop.h"

Bishop::Bishop() : Piece() {}

//first int represents x (letter side) second repreents y (number side)
//bool represents team - white is true, black is false
//sets representation as E and sets value as 0 and sets
Bishop::Bishop(int x, int y, int white) : Piece(x, y, 'B', 300, white) {}