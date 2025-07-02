#ifndef MISSILE_H
#define MISSILE_H

#include <raylib.h>
#include <lppgmath.h>

class Missile
{
private:
	lppg::Vector2 position;
public:
	void Draw();
	void Move();
};

#endif
