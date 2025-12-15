#include "Thief.h"

Thief::Thief(string nickname) : Thief(nickname)
{
	job_name = "Thief";
	this->nickname = nickname;
	level = 1;
	HP = 100;
	MP = 100;
	power = 10;
	defence = 5;
	accuracy = 10;
	speed = 10;
}

void Thief::attack()
{
	cout << "Thief Attack!" << endl;
}

void Thief::defend()
{
	cout << "Thief defend!" << endl;
}