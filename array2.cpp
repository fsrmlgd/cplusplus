/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：array2.cpp
*   创 建 者：lgd
*   创建日期：2021年10月28日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <array>
#include <iostream>
using namespace std;

int main()
{
    array<int, 5> items = { 1, 2, 3, 4, 5 };
    cout << "Items before modification: ";
    for (auto item : items)
        cout << item << " ";
    cout << "\nItems after modification: ";
    for (auto& item : items)
        cout << item * 2 << " ";
    cout << endl;
    return 0;
}
