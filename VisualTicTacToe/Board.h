#pragma once
class Board
{
private:
	int rows_;
	int cols_;
	std::vector<char> row;
	std::vector<std::vector<char>> newBoard;

public:
	Board();
	std::vector<std::vector<char>> getBoard();
	void render();
};

