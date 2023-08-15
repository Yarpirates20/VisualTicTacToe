#include "stdafx.h"
#include "Game.h"

Game::Game() : m_window("Tic-Tac-Toe", sf::Vector2u(1024, 768))
{
	// Setting up class members
	m_xText.loadFromFile("C:/Users/rsamo/source/repos/VisualTicTacToe/VisualTicTacToe/images/x_sprite.png");
	m_xMark.setTexture(m_xText);
	m_xMark.setColor(sf::Color(255, 0, 0, 255));
	m_increment = sf::Vector2i(4, 4);
}

Game::~Game()
{
}


void Game::handleInput()
{
	
}

void Game::update()
{
	m_window.update();		// Update window events
	drawX();

}

void Game::render()
{
	m_window.beginDraw();	// Clear
	m_window.Draw(m_xMark);
	m_window.endDraw();		// Display
}




void Game::drawX()
{
	sf::Vector2u l_windSize = m_window.getWindowSize();
	sf::Vector2u l_textSize = m_xText.getSize();

	
}
