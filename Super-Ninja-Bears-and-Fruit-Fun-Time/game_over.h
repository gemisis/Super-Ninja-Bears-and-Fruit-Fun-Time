#pragma once

#include "game_state.h"

class game_over : public tiny_state
{
public:
	void Initialize(sf::RenderWindow* window);
	void Update(sf::RenderWindow* window);
	void Render(sf::RenderWindow* window);
	void Destroy(sf::RenderWindow* window);
private:
	sf::Font* font;
	sf::Text* gameOverText;
	bool enterKey;
};
