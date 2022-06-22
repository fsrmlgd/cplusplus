/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：array.cpp
*   创 建 者：lgd
*   创建日期：2021年10月28日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <array>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    array<int, 5> n = { 1, 2, 3, 4, 5 };
    cout << "Element" << setw(13) << "Value" << endl;
    for (size_t i = 0; i < n.size(); ++i)
        cout << setw(7) << i << setw(13) << n[i] << endl;
    return 0;
}
