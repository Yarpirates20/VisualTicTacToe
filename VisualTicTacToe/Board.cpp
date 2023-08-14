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

	// Top coordinate markers
	std::cout << "  0 1 2" << std::endl;
	std::cout << "  -----" << std::endl;
	//std::cout << std::setw(10) << "0|       |" << std::endl;
	//std::cout << std::setw(10) << "1|       |" << std::endl;
	//std::cout << std::setw(10) << "2|       |" << std::endl;
	

	int rowCount = 0;

	for (int row = 0; row < height; row++)
	{
		std::cout << rowCount << "|";
		for (int col = 0; col < width; col++)
		{
			std::cout << "X ";
		}
		std::cout << "\b|";
		std::cout << "\n";
		rowCount++;
	}

	std::cout << "  -----" << std::endl;
}

 //   0 1 2
 //  -------
 //0| X X X |
 //1| O O O |
 //2| X O X |
 //  -------