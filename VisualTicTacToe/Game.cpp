#include "stdafx.h"
#include "Game.h"

Game::Game() : mWindow(sf::VideoMode(1024, 768), "Tic-Tac-Toe"), mPlayer()
{
	mPlayer.setRadius(20.f);
	mPlayer.setPosition(500.f, 300.f);
	mPlayer.setFillColor(sf::Color::Green);
}

void Game::processEvents()
{
	sf::Event event;
	while (mWindow.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			mWindow.close();
		}
	}
}


void Game::render()
{
	mWindow.clear();
	mWindow.draw(mPlayer);
	mWindow.display();
}


void Game::run()
{
	while (mWindow.isOpen())
	{
		processEvents();
		update();
		render();
	}
}

void Game::update()
{
}