#ifndef MOVEABLE_H
#define MOVEABLE_H

#include <lppgmath.h>
#include <lppgtransform.h>

class Moveable : public virtual lppg::Transform
{
protected:
	float speed;

public:
	float GetSpeed();
	void SetSpeed(float value);
	void Move(const lppg::Vector2& newPosition);
	void Move(const lppg::Vector2& direction, float amount);
};

#endif
