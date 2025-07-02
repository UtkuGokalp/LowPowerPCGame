#include "player.h"

Player::Player()
{
	position = lppg::Vector2(WINDOW_WIDTH * 0.5f, WINDOW_HEIGHT * 0.5f);
	SetSpeed(8.0f);
}

void Player::Draw()
{
	static constexpr float RADIUS = 20.0f;
	DrawCircle(position.x, position.y, RADIUS, RED);
}
