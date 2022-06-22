/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：depart.cpp
*   创 建 者：lgd
*   创建日期：2021年09月21日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter five numbers: ";
    int number;
    cin >> number;
    for (int i = 1; i <= 5; i++) {
        cout << number % (10 * i) << "   ";
    }
    cout << endl;
    return 0;
}
