#include <iostream>

#include "Monster.h"
#include "Player.h"

int main()
{
	Player p;
	Monster m;
	m.TakeDamage(p.Attack());
}