/*================================================================
*   Copyright (C) 2022 Sangfor Ltd. All rights reserved.
*
*   文件名称：sqrt.cpp
*   创 建 者：lgd
*   创建日期：2022年02月23日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <cmath>
#include <iostream>
using namespace std;

double binary_sqrt(double n)
{
    double start = 0;
    double end = n;
    double middle = start + (end - start) / 2;
    double diff = middle * middle - end;
    double error = 1e-10;
    while (abs(diff) >= error) {
        if (diff > 0)
            end = middle;
        else
            start = middle;
        middle = start + (end - start) / 2;
        diff = middle * middle - n;
    }
    return middle;
}

int main()
{
    for (int i = 0; i < 1000; i++)
        cout << binary_sqrt(i) << endl;
}
