/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：craps.cpp
*   创 建 者：lgd
*   创建日期：2021年10月12日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
unsigned int rollDice();

int main()
{
    enum Status { CONTINUE,
        WON,
        LOST };
    srand(static_cast<unsigned int>(time(0)));
    unsigned int myPoint = 0;
    Status gameStatus = CONTINUE;
    unsigned int sumofDice = rollDice();
    switch (sumofDice) {
    case 7:
    case 11:
        gameStatus = WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;
    default:
        gameStatus = CONTINUE;
        myPoint = sumofDice;
        cout << "Point is " << myPoint << endl;
        break;
    }
    while (gameStatus == CONTINUE) {
        sumofDice = rollDice();
        if (sumofDice == myPoint)
            gameStatus = WON;
        else if (sumofDice == 7)
            gameStatus = LOST;
    }

    if (gameStatus == WON)
        cout << "Player wins" << endl;
    else
        cout << "Players loses" << endl;
    return 0;
}

unsigned int rollDice()
{
    unsigned int die1 = rand() % 6 + 1;
    unsigned int die2 = rand() % 6 + 1;
    unsigned int sum = die1 + die2;
    cout << "Players rolled " << die1 << " + " << die2 << " = " << sum << endl;
    return sum;
}
