/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：reference.cpp
*   创 建 者：lgd
*   创建日期：2021年10月23日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <iostream>
using namespace std;

int squareByValue(int);
void squareByReference(int&);

int main()
{
    int x = 2;
    int z = 4;
    cout << "x = " << x << " before squareByValue\n"
         << "Value returned by squareByValue: " << squareByValue(x) << endl;
    cout << "x = " << x << " after squareByValue" << endl;
    cout << "z = " << z << " before squareByReference" << endl;
    squareByReference(z);
    cout << "z = " << z << " after squareByReference" << endl;
    return 0;
}

int squareByValue(int number)
{
    return number *= number;
}

void squareByReference(int& n)
{
    n *= n;
}
