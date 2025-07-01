#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"
#include "globals.h"
#include "lppgmath.h"

class Player
{
private:
	lppg::Vector2 position;

public:
	static constexpr float SPEED = 450.0f;

public:
	Player();
	void DrawPlayer();
	const lppg::Vector2& GetPosition();
	void MovePlayer(lppg::Vector2 newPosition);
	void MovePlayer(lppg::Vector2 direction, float amount);
};

#endif
