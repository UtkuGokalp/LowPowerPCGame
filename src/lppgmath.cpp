#include "lppgmath.h"

namespace lppg
{
	Vector2::Vector2()
	{
		this->x = 0.0f;
		this->y = 0.0f;
	}

	Vector2::Vector2(float x, float y)
	{
		this->x = x;
		this->y = y;
	}
	
	float Vector2::magnitude()
	{
		return std::sqrt(x * x + y * y);
	}
	
	Vector2 Vector2::normalized()
	{
		float mag = magnitude();
		if (fabsf(mag) <= EPSILON)
		{
			return *this;
		}
		return *this / mag;
	}
	
	float Vector2::dot(const Vector2& other)
	{
		return x * other.x + y * other.y;
	}

	void Vector2::print(bool newLine)
	{
		std::cout << "x: " << x << ", y: " << y;
		if (newLine)
		{
			std::cout << std::endl;
		}
		else
		{
			std::cout << std::flush;
		}
	}
	
	Vector2 Vector2::operator +(const Vector2& other)
	{
		return Vector2(x + other.x, y + other.y);
	}
	
	Vector2 Vector2::operator -(const Vector2& other)
	{
		return Vector2(x - other.x, y - other.y);
	}
	
	Vector2 Vector2::operator *(float other)
	{
		return Vector2(x * other, y * other);
	}

	Vector2 operator *(float scalar, const Vector2& vector)
	{
		return Vector2(vector.x * scalar, vector.y * scalar);
	}
	
	Vector2 Vector2::operator /(float other)
	{
		if (fabsf(other) <= EPSILON)
		{
			return *this;
		}
		return Vector2(x / other, y / other);
	}

	Vector2 Vector2::operator +=(const Vector2& other)
	{
		this->x += other.x;
		this->y += other.y;
		return *this;
	}
	Vector2 Vector2::operator -=(const Vector2& other)
	{
		this->x -= other.x;
		this->y -= other.y;
		return *this;
	}
	Vector2 Vector2::operator *=(float other)
	{
		this->x *= other;
		this->y *= other;
		return *this;
	}
	Vector2 Vector2::operator /=(float other)
	{
		if (fabsf(other) <= EPSILON)
		{
			return *this;
		}
		this->x /= other;
		this->y /= other;
		return *this;
	}
}
