//
// Created by Kenny Daily on 10/9/2018.
//

#include "Pawn.h"

Pawn::Pawn() : Piece() {}

//first int represents x (letter side) second repreents y (number side)
//bool represents team - white is true, black is false
//sets representation as E and sets value as 0 and sets
Pawn::Pawn(int x, int y, int white) : Piece(x, y, 'P', 100, white) {}