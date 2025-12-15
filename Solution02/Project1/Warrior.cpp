#include "Warrior.h"

Warrior::Warrior(string nickname) : Player(nickname)
{
	job_name = "Warrior";
	this->nickname = nickname;
	level = 1;
	HP = 100;
	MP = 100;
	power = 10;
	defence = 5;
	accuracy = 10;
	speed = 10;
}

void Warrior::attack()
{
	cout << "Warrior Attack!" << endl;
}

void Warrior::defend()
{
	cout << "Warrior defend!" << endl;
}