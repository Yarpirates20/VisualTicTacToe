#pragma once
class Game
{
private:
	void processEvents();
	void update();
	void render();

	

	sf::RenderWindow mWindow;
	sf::CircleShape mPlayer;

public:
	Game();
	void run();
};

