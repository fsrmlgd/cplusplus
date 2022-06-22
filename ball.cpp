/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：ball.cpp
*   创 建 者：lgd
*   创建日期：2021年10月26日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

inline double sphereVolume(double radius)
{
    return 4.0 / 3.0 * 3.14159 * pow(radius, 3);
}

int main()
{
    int radius;
    cout << "please enter the radius of sphere: ";
    cin >> radius;
    cout << setw(6) << "Radius" << setw(15) << "SphereVolume" << endl;
    cout << setw(6) << radius << setw(15) << sphereVolume(radius) << endl;
    int y = floor(125.4564 * 10 + 0.5) / 10;
    int z = floor(1253.561 * 100 + 0.5) / 100;
    cout << y << " " << z << endl;
    return 0;
}
