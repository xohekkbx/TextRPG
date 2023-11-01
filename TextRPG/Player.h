#pragma once

#include "Vector.h"

class Player
{
public:

	float Attack();

	void GetDmg();

	void Evasion();

	void Move();


private:
	float hp_ = 0.0f;
	float mp_ = 0.0f;
	float exp_ = 0.0f;
	int lv_ = 0;
	float atk_ = 0.0f;
	float def_ = 0.0f;
};