#pragma once
#include <iostream>
#include "Character.h"

class Enemy : public Character
{
	float m_Strength;

public:
	Enemy(float health, int x, int y, float strength)
		: Character(health, x, y)
		, m_Strength(strength)
	{

	}

	void Draw() override
	{
		std::cout << "+";
	}

	void UseHealth(float health)
	{
		m_Health += health;
		if (!m_IsAlive)
		{
			m_IsAlive = true;
		}
	}

};