#pragma once
#include <iostream>

class Monster
{
public:

	float Attack()
	{
		std::cout << "MonsterÀÇ °ø°Ý!" << std::endl;
		return atk_;
	}

	void TakeDamage(float player_damage)
	{
		hp_ -= player_damage;
	}

	

private:
	float hp_ = 0.0f;
	float mp_ = 0.0f;
	float exp_ = 0.0f;
	int lv_ = 0;
	float atk_ = 0.0f;
	float def_ = 0.0f;
};