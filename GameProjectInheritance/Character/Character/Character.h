#pragma once
class Character
{
protected:
	float m_Health;
	int m_xPosition;
	int m_yPosition;
	bool m_IsAlive;

public:
	Character(float health, int x, int y)
		: m_Health(health)
		, m_xPosition(x)
		, m_yPosition(y)
		, m_IsAlive(false)
	{

	}

	void Move(int x, int y)
	{
		m_xPosition += x;
		m_yPosition += y;

	}

	void TakeDamage(float damage)
	{
		if (m_IsAlive)
		{
			m_Health -= damage;
			if (m_Health <= 0)
			{
				m_Health = 0;
				m_IsAlive = false;
			}
		}
	}

	virtual void Draw()
	{
		std::cout << "I'm not sure how to draw myself" << std::endl;
	}
};