#pragma once

#include "bullet.h"

class PlayerBullet : public Bullet
{
public:
	PlayerBullet(Map* map, float x, float y, float direction, float distance) : Bullet(map, x, y, direction, distance)
	{
		this->speed = 4;
		this->groupId = 4;
		this->setColor(sf::Color::White);
	}
};