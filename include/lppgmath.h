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
		float magnitude();
		Vector2 normalized();
		float dot(const Vector2& other);
		void print(bool newLine = true);
		
		Vector2 operator +(const Vector2& other);
		Vector2 operator -(const Vector2& other);
		Vector2 operator *(float other);
		Vector2 operator /(float other);

		Vector2 operator +=(const Vector2& other);
		Vector2 operator -=(const Vector2& other);
		Vector2 operator *=(float other);
		Vector2 operator /=(float other);
	};
	
	Vector2 operator *(float scalar, const Vector2& vector);
}

#endif
