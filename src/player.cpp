#include "player.h"

Player::Player()
{
	position = lppg::Vector2(WINDOW_WIDTH * 0.5f,
							 WINDOW_HEIGHT * 0.5f);
}

void Player::DrawPlayer()
{
	static constexpr float RADIUS = 20.0f;
	DrawCircle(position.x, position.y, RADIUS, RED);
}

void Player::MovePlayer(lppg::Vector2 newPosition)
{
	position = newPosition;
}

void Player::MovePlayer(lppg::Vector2 direction, float amount)
{
	position += direction.normalized() * amount;
}

const lppg::Vector2& Player::GetPosition()
{
	return position;
}
