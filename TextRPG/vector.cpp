#include "Vector.h"
#include <iostream>




// Vector operation
Vector2<float> Vector2<float>::operator+(Vector2& ref)
{
	return Vector2{ ref.x + x, ref.y + y };
}

Vector2<float> Vector2<float>::operator-(Vector2& ref)
{
	return Vector2{ ref.x - x, ref.y - y };
}



std::ostream& operator<<(std::ostream& os, const Vector2<float>& pos) {
	os << '<' << pos.x << ", " << pos.y << '>' << std::endl;
	return os;
}

float Vector2<float>::GetX()
{
	return x;
}
float Vector2<float>::GetY()
{
	return y;
}