#include "Player.h"
// 헤더에 있는 함수를 cpp에 구현 (아래 ::) // 생성자는 변수 초기화 필수
Player::Player(string nickname)
{
	job_name = "";
	this->nickname = nickname;
    level = 0;
	HP = 0;
	MP = 0;
	power = 0;
	defence = 0;
	accuracy = 0;
	speed = 0;
}

void Player::printPlayerStatus()
{
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "직업: " << job_name << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}
// get 은 return 필수 
string Player::getJobName()
{
    return job_name;           // class에 있는 변수명 그대로 가져오는 것
}
string Player::getNickname()
{
    return nickname;
}
int Player::getLevel()
{
    return level;
}
int Player::getHP()
{
    return HP;
}
int Player::getMP()
{
    return MP;
}
int Player::getPower()
{
    return power;
}
int Player::getDefence()
{
    return defence;
}
int Player::getAccuracy()
{
    return accuracy;
}
int Player::getSpeed()
{
    return speed;
}

void Player::setNickname(string nickname)
{
    this->nickname = nickname;
}
void Player::setHP(int HP)
{
    this->HP = HP;
}
void Player::setMP(int MP)
{
    this->MP = MP;
}
void Player::setPower(int power)
{
    this->power = power;
}
void Player::setDefence(int defence)
{
    this->defence = defence;
}
void Player::setAccuracy(int accuracy)
{
    this->accuracy = accuracy;
}
void Player::setSpeed(int speed)
{
    this->speed = speed;
}
