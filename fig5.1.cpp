/*================================================================
 *   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
 *
 *   文件名称：fig5.1.cpp
 *   创 建 者：lgd
 *   创建日期：2021年10月11日
 *   邮    箱: lgd1447210528@gmail.com
 ================================================================*/
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    unsigned int counter = 1;
    while (counter <= 10) {
        cout << counter << " ";
        ++counter;
    }
    for (int i = 0; i < 10; i++) {
        cout << i << " " << pow(i, i) << endl;
    }
    cout << endl;
    return 0;
}
