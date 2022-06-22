/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：coin.cpp
*   创 建 者：lgd
*   创建日期：2021年10月27日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    srand(5);
    int Head = 0;
    int Tail = 0;
    for (int i = 0; i < 100; ++i) {
        rand() % 2 ? Head++ : Tail++;
    }
    cout << "Head = " << Head << endl;
    cout << "Tail = " << Tail << endl;
    return 0;
}
