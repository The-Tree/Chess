//
// Created by Kenny Daily on 10/9/2018.
//

#include "Knight.h"

Knight::Knight() : Piece() {}

//first int represents x (letter side) second repreents y (number side)
//bool represents team - white is true, black is false
//sets representation as E and sets value as 0 and sets
Knight::Knight(int x, int y, int white) : Piece(x, y, 'N', 300, white) {}