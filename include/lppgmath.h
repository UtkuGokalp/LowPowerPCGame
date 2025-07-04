#ifndef LPPGMATH_H
#define LPPGMATH_H

#include <cmath>
#include <globals.h>
#include <iostream>

namespace lppg
{
	class Vector2
	{
	public:
		float x, y;
		Vector2();
		Vector2(float x, float y);
		float magnitude() const;
		Vector2 normalized() const;
		float dot(const Vector2& other) const;
		void print(bool newLine = true) const;
		
		Vector2 operator +(const Vector2& other) const;
		Vector2 operator -(const Vector2& other) const;
		Vector2 operator *(float other) const;
		Vector2 operator /(float other) const;

		Vector2 operator +=(const Vector2& other);
		Vector2 operator -=(const Vector2& other);
		Vector2 operator *=(float other);
		Vector2 operator /=(float other);
	};
	
	Vector2 operator *(float scalar, const Vector2& vector);
}

#endif
