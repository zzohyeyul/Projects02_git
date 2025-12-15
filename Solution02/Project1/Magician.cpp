#include "Magician.h"

Magician::Magician(string nickname) : Player(nickname)
{
	job_name = "Magician";
	this->nickname = nickname;
	level = 1;
	HP = 100;
	MP = 100;
	power = 10;
	defence = 5;
	accuracy = 10;
	speed = 10;
}

void Magician::attack()
{
	cout << "Magician Attack!" << endl;
}

void Magician::defend()
{
	cout << "Magician defend!" << endl;
}