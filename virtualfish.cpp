/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：virtualfish.cpp
*   创 建 者：lgd
*   创建日期：2021年03月01日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/

#include <iostream>
using namespace std;

class Fish {
private:
    /* data */

public:
    virtual void Swim()
    {
        cout << "Fish swims!" << endl;
    }
}

class Tuna : public Fish {
private:
    /* data */

public:
    //override Fish::Swim
    void Swim()
    {
        cout << "Tuna swims!" << endl;
    }
};

void MakeFishSwim(Fish& inputFish)
{
    inputFish.Swim();
}

int main()
{
    Tuna mydinner;
    MakeFishSwim(mydinner);
    mydinner.Swim();
    return 0;
}
