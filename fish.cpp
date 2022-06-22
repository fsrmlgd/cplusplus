/*================================================================
 *   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
 *
 *   文件名称：fish.cpp
 *   创 建 者：lgd
 *   创建日期：2021年02月15日
 *   邮    箱: lgd1447210528@gmail.com
 *
 ================================================================*/

#include <iostream>
using namespace std;

class Fish {
    protected:
        bool isFreshWaterFish;
    public:
        Fish(bool isFreshWater)
        {
            isFreshWaterFish = isFreshWater;
        }
        void Swim()
        {
            if (isFreshWaterFish) {
                cout << "Swim in lake." << endl;
            } else {
                cout << "Swim in sea." << endl;
            }
        }
};

class Tuna : public Fish {
    public:
        Tuna():Fish(false){}
};

class Carp : public Fish {
    public:
        Carp():Fish(true){}
};

int main()
{
    Carp mylunch;
    Tuna mydinner;
    cout << "About my food: " << endl;
    cout << "午餐: ";
    mylunch.Swim();
    cout << "晚餐: ";
    mydinner.Swim();
    return 0;
}
