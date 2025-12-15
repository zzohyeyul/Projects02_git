#pragma once
#include "Player.h"
class Archer :  // class & struct 에는 중괄호 뒤 마지막 세미콜론 필수
    public Player
{
public:
    Archer(string nickname);
    void attack();
    void defend();    // 상속 받은 순수 가상 함수 구현
};

