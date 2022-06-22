/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：math.cpp
*   创 建 者：lgd
*   创建日期：2021年10月12日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    unsigned int f1 = 0;
    unsigned int f2 = 0;
    unsigned int f3 = 0;
    unsigned int f4 = 0;
    unsigned int f5 = 0;
    unsigned int f6 = 0;
    for (unsigned int roll = 1; roll <= 6000000; ++roll) {
        int face = rand() % 6 + 1;
        switch (face) {
        case 1:
            ++f1;
            break;
        case 2:
            ++f2;
            break;
        case 3:
            ++f3;
            break;
        case 4:
            ++f4;
            break;
        case 5:
            ++f5;
            break;
        case 6:
            ++f6;
            break;
        default:
            cout << "Program should never get here!";
        }
    }
    cout << f1 << endl;
    cout << f2 << endl;
    cout << f3 << endl;
    cout << f4 << endl;
    cout << f5 << endl;
    cout << f6 << endl;
    return 0;
}
