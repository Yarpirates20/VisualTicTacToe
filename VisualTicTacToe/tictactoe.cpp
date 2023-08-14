#include "stdafx.h"
#include "Player.h"
#include "Board.h"
#include "Game.h"
using namespace std;

int main()
{
	Game game;
	Board newBoard;
	newBoard.renderBoard(newBoard.getBoard());
	//game.run();

	/*cout << newBoard.getBoard().size();
	cout << newBoard.getBoard()[0].size();*/

	return 0;
}