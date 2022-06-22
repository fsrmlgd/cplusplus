/*================================================================
 *   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
 *
 *   文件名称：car.cpp
 *   创 建 者：lgd
 *   创建日期：2021年02月27日
 *   邮    箱: lgd1447210528@gmail.com
 ================================================================*/
#include <iostream>
using namespace std;

class Motor {
public:
    void SwitchIgnition()
    {
        cout << "Ignition ON" << endl;
    }
    void PumpFuel()
    {
        cout << "Fuel in cylinders" << endl;
    }
    void FireCylinders()
    {
        cout << "Vroooom" << endl;
    }
};

class car : private Motor {
public:
    void Move()
    {
        SwitchIgnition();
        PumpFuel();
        FireCylinders();
    }
};

int main()
{
    car myDreamCar;
    myDreamCar.Move();
    return 0;
}
