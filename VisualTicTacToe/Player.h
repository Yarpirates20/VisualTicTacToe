#pragma once
class Player
{
private:
	char playerSymbol;
	int playerScore;

public:
	//Player();
	Player(char symbol, int score = 0);
	char getPlayerSymbol();
	void addToScore();
	int getPlayerScore();
	int getMove();
};

