#pragma once
#include "Window.h"
class Game
{
public:
	Game();
	~Game();

	void handleInput();
	void update();
	void render();
	Window* getWindow();

private:
	void drawX();
	Window m_window;
	sf::Texture m_xText;
	sf::Sprite m_xMark;
	sf::Vector2i m_increment;
};

