/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：pointerfish.cpp
*   创 建 者：lgd
*   创建日期：2021年03月01日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/

#include<iostream>
using namespace std;

class Fish
{
public:
    Fish()
    {
        cout<<"Constructed Fish"<<endl;
    }
    virtual ~Fish()
    {
        cout<<"Destroyed Fish"<<endl;
    }
};

class Tuna:public Fish
{
public:
    Tuna()
    {
        cout<<"Constructed Tuna"<<endl;
    }
    ~Tuna()
    {
        cout<<"Destroyed Tuna"<<endl;
    }
};

void DeleteFishMemory(Fish* pFish)
{
    delete pFish;
}

int main()
{
    Tuna* pTuna = new Tuna;
    DeleteFishMemory(pTuna);
    Tuna myDinner;
    return 0;
}
