//
// Created by Kenny Daily on 10/5/2018.
//

#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

//enum PIECETYPE {King, Queen, Bishop, Knight, Rook, Pawn, Empty}; removed atm because i do not yet understand enum

class Piece {
private:
	int x; //x coordinate, letter side, of board of piece
	int y; //y coordinate, numberside. of board of piece
	char rep; //the single character representation of the piece
	int value; //the value of the piece
	int white; //1 if white team, 2 if black team, 0 if neither team
public:
	Piece();
	Piece(int x, int y, char rep, int value, int white);
	int getX() const;
	void setX(int x);
	int getY() const;
	void setY(int y);
	char getRep() const;
	void setRep(char rep);
	int getValue() const;
	void setValue(int value);
	int isWhite() const;
	void setWhite(int white);
};


#endif //CHESS_PIECE_H
