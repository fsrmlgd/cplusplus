/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：Platypus.cpp
*   创 建 者：lgd
*   创建日期：2021年02月28日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/

#include <iostream>
using namespace std;

class Mammal {
public:
    void FeedBabyMilk()
    {
        cout << "Mammal:Baby says glug!" << endl;
    }
};

class Reptile {
public:
    void SpitVenom()
    {
        cout << "Reptile:Shoo enemy! Spits venom!" << endl;
    }
};

class Bird {
public:
    void LayEggs()
    {
        cout << "Bird: Laid my eggs, am lighter now!" << endl;
    }
};

class Platypus : public Mammal, public Bird, public Reptile {
public:
    void Swim()
    {
        cout << "Platypus:Voila, I can swim!" << endl;
    }
};

int main()
{
    Platypus realFreak;
    realFreak.LayEggs();
    realFreak.FeedBabyMilk();
    realFreak.SpitVenom();
    realFreak.Swim();
    return 0;
}
