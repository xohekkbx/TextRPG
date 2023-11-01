#pragma once

class Player
{
public:

	float Attack()
	{
		std::cout << "PlayerÀÇ °ø°Ý!" << std::endl;
		return atk_;
	}

	void Evasion()
	{

	}

private:
	float hp_ = 0.0f;
	float mp_ = 0.0f;
	float exp_ = 0.0f;
	int lv_ = 0;
	float atk_ = 0.0f;
	float def_ = 0.0f;
};