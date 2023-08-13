#include "stdafx.h"
#include "Board.h"

Board::Board()
	: row(3), newBoard(3, row), 
	  rows_(3), cols_(3)
{
}

std::vector<std::vector<char>> Board::getBoard()
{
	return newBoard;
}
