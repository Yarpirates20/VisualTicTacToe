#include "stdafx.h"
#include "Player.h"
#include "Board.h"
#include "Game.h"
#include "Window.h"
using namespace std;

int main()
{
	// Create game object
	Game game;
	//while (!game.getWindow()->isDone())
	//{
		// Game loop
		//game.handleInput();
		game.update();
		game.render();
	//}
	//Board newBoard;
	//newBoard.renderBoard(newBoard.getBoard());
	//game.run();

	/*cout << newBoard.getBoard().size();
	cout << newBoard.getBoard()[0].size();*/

	return 0;
}