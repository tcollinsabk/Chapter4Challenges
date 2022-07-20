#pragma once
#include "Point.h"

class Player 
{
	Point m_position;
	bool m_hasKey;

public:
	Player();
	~Player();

	int getXPosition() {return m_position.m_x;};
	int getYPosition() { return m_position.m_y; };
	int* GetXPositionPointer() { return &(m_position.m_x); }
	int* GetYPositionPointer() { return &m_position.m_y; }

	void SetPosition(int x, int y);

	bool hasKey();
	void PickupKey();
	void UseKey();

	void Draw();
};