#include "Archer.h"

Archer::Archer(string nickname) : Player(nickname)
{
	job_name = "Archer";
	this->nickname = nickname;
	level = 1;
	HP = 100;
	MP = 100;
	power = 10;
	defence = 5;
	accuracy = 10;
	speed = 10;
}

void Archer::attack()
{
	cout << "Archer Attack!" << endl;
}

void Archer::defend()
{
	cout << "Archer defend!" << endl;
}