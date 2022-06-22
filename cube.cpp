/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：cube.cpp
*   创 建 者：lgd
*   创建日期：2021年10月17日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <iostream>
using namespace std;

inline double cube(const double side)
{
    return side * side * side;
}

int main()
{
    double sideValue;
    cout << "Enter the side length of your cube: ";
    cin >> sideValue;
    cout << "Volume of cube with side " << sideValue << " is " << cube(sideValue) << endl;
    return 0;
}
