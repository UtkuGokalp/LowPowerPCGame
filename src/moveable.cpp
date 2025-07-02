#include <moveable.h>

float Moveable::GetSpeed()
{
	return speed;
}

void Moveable::SetSpeed(float value)
{
	this->speed = speed;
}

void Moveable::Move(const lppg::Vector2& newPosition)
{
	position = newPosition;
}

void Moveable::Move(const lppg::Vector2& direction, float amount)
{
	position += direction.normalized() * amount;
}
