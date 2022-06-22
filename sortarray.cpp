/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：sortarray.cpp
*   创 建 者：lgd
*   创建日期：2021年10月28日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <algorithm>
#include <array>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    const size_t arraySize = 7;
    array<string, arraySize> colors = { "red", "orange", "yellow", "green", "blue", "Indigo", "violet" };
    cout << "Unsorted array:" << endl;
    for (string color : colors)
        cout << color << " ";
    cout << endl
         << "Sorted array:" << endl;
    sort(colors.begin(), colors.end());
    for (string color : colors)
        cout << color << " ";
    bool found = binary_search(colors.begin(), colors.end(), "Indigo");
    cout << endl
         << "\"Indigo\" " << (found ? "was" : "was not") << " found in colors" << endl;
    found = binary_search(colors.begin(), colors.end(), "cyan");
    cout << "\"cyan\" " << (found ? "was" : "was not") << " found in colors" << endl;
    return 0;
}
