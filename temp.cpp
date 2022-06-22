/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：temp.cpp
*   创 建 者：lgd
*   创建日期：2021年03月19日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <iostream>
#include <string>
using namespace std;

template <typename Type>
const Type& GetMax(const Type& value1, const Type& value2)
{
    if (value1 > value2)
        return value1;
    else
        return value2;
}

int main()
{
    int num1 = -101;
    int num2 = 2021;
    cout << "num1 is in " << &num1 << endl;
    cout << "num2 is in " << &num2 << endl;
    cout << "GetMax(num1,num2) is " << GetMax(num1, num2) << endl;
    cout << "GetMax(num1.num2) is in" << &GetMax(num1, num2) << endl;
    return 0;
}
