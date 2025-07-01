#include <input.h>

lppg::Vector2 GetPlayerInput()
{
	lppg::Vector2 direction = lppg::Vector2();

	if (IsKeyDown(KEY_W))
	{
		direction.y -= 1.0f;
	}
	if (IsKeyDown(KEY_S))
	{
		direction.y += 1.0f;
	}
	if (IsKeyDown(KEY_D))
	{
		direction.x += 1.0f;
	}
	if (IsKeyDown(KEY_A))
	{
		direction.x -= 1.0f;
	}

	return direction.normalized();
}
