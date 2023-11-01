#pragma once

#include <iostream>


template <typename T>
class Vector2
{
public:
	Vector2(T x = T(), T y = T())
	{
		this->x = x;
		this->y = y;
	}

	Vector2 operator+(Vector2& ref);
	Vector2 operator-(Vector2& ref);

	friend std::ostream& operator<<(std::ostream& os, const Vector2& pos);

	T GetX();
	T GetY();
	

private:
	T x = T();
	T y = T();
};