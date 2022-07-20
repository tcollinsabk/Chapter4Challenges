#include "Player.h"
#include <iostream>
using namespace std;

constexpr char kPlayerSymbol = '@';
Player::Player()
	: m_hasKey(false)
{

}

Player::~Player()
{

}

void Player::SetPosition(int x, int y)
{
	m_position.m_x = x;
	m_position.m_y = y;
}

bool Player::hasKey()
{
	return m_hasKey;
}

void Player::PickupKey()
{
	m_hasKey = true;
}

void Player::UseKey()
{
	m_hasKey = false;
}

void Player::Draw()
{
	cout << kPlayerSymbol;
}