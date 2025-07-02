#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"
#include "globals.h"
#include "lppgmath.h"
#include "moveable.h"

class Player : public Moveable
{
public:
	Player();
	void Draw();
};

#endif
