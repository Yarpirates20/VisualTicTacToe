#pragma once
class Game
{
private:
	void processEvents();
	void update();
	void render();

	

	sf::RenderWindow m_window;
	sf::CircleShape m_player;

public:
	Game();
	void run();
};

