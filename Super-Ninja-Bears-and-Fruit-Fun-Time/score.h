#pragma once

#include <SFML/Graphics.hpp>

class Score : public sf::Text
{
public:
	Score(sf::Font &font, unsigned int size);
	inline void SetValue(int value)
	{
		this->value = value;
	}
	void IncrementScore();
	void Update();
private:
	int value;
};