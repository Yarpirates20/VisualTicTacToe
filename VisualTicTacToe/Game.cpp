#include "stdafx.h"
#include "Game.h"

Game::Game() : m_window(sf::VideoMode(1024, 768), "Tic-Tac-Toe"), m_player()
{
	m_player.setRadius(20.f);
	m_player.setPosition(500.f, 300.f);
	m_player.setFillColor(sf::Color::Green);
}

void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			m_window.close();
		}
	}
}


void Game::render()
{
	/*sf::Texture texture;
	if (!texture.loadFromFile("C:\\Users\\rsamo\\source\\repos\\VisualTicTacToe\\VisualTicTacToe\\simple.png"))
	{
		return;
	}
	sf::Sprite sprite(texture);
	*/

	m_window.clear();
	//mWindow.draw(sprite);
	m_window.display();
}


void Game::run()
{
	while (m_window.isOpen())
	{
		processEvents();
		update();
		render();
	}
}

void Game::update()
{
}