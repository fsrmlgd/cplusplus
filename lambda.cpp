/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：lambda.cpp
*   创 建 者：lgd
*   创建日期：2021年11月07日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <algorithm>
#include <array>
#include <iostream>
using namespace std;

int main()
{
    const size_t SIZE = 4;
    array<int, SIZE> values = { 2, 5, 7, 8 };
    for_each(values.cbegin(), values.cend(), [](int i) { cout << i << endl; });
    int sum = 0;
    for_each(values.cbegin(), values.cend(), [&sum](int i) { sum += i; });
    cout << "sum is " << sum << endl;
    return 0;
}
