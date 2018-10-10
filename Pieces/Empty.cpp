//
// Created by Kenny Daily on 10/5/2018.
//

#include "Empty.h"

Empty::Empty() : Piece() {}

//first int represents x (letter side) second repreents y (number side)
//bool represents team - white is true, black is false
//sets representation as E and sets value as 0 and sets
Empty::Empty(int x, int y) : Piece(x, y, ' ', 0, 0) {}