//
// Created by Kenny Daily on 10/5/2018.
//

#include "Piece.h"

Piece::Piece() {
	Piece::x = 0;
	Piece::y = 0;
	Piece::rep = ' ';
	Piece::value = 0;
	Piece::white = 0;
}

//first int represents x (letter side) second repreents y (number side)
//first char represents the single character representation of the piece on the board
//third int represents the value of the piece
//fourth int represents team - white is 1, black is 2, 0 if neither
Piece::Piece(int x, int y, char rep, int value, int white) {
	Piece::x = x;
	Piece::y = y;
	Piece::rep = rep;
	Piece::value = value;
	Piece::white = white;
}

int Piece::getX() const {
	return x;
}

void Piece::setX(int x) {
	Piece::x = x;
}

int Piece::getY() const {
	return y;
}

void Piece::setY(int y) {
	Piece::y = y;
}

char Piece::getRep() const {
	return rep;
}

void Piece::setRep(char rep) {
	Piece::rep = rep;
}

int Piece::getValue() const {
	return value;
}

void Piece::setValue(int value) {
	Piece::value = value;
}

int Piece::isWhite() const {
	return white;
}

void Piece::setWhite(int white) {
	Piece::white = white;
}
