#include <iostream>
#include "Board.h"

int main() {
	std::cout << "Hello, World!" << std::endl;

	Board chessBoard = Board();

	chessBoard.printBoard();

	return 0;
}