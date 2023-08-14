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

void Board::renderBoard(std::vector<std::vector<char>> inBoard)
{
	int height = inBoard.size();
	int width = inBoard[0].size();

	for (int row = 0; row < height; row++)
	{
		for (int col = 0; col < width; col++)
		{

		}
	}
}

 //   0 1 2
 //  -------
 //0| X X X |
 //1| O O O |
 //2| X O X |
 //  -------