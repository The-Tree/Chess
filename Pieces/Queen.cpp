//
// Created by Kenny Daily on 10/9/2018.
//

#include "Queen.h"

Queen::Queen() : Piece() {}

//first int represents x (letter side) second repreents y (number side)
//bool represents team - white is true, black is false
//sets representation as E and sets value as 0 and sets
Queen::Queen(int x, int y, int white) : Piece(x, y, 'Q', 900, white) {}