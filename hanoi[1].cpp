/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：hanoi.cpp
*   创 建 者：lgd
*   创建日期：2021年10月28日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <iostream>
using namespace std;

void TowerofHanio(int n, char a, char b, char c)
{
    if (n == 1) {
        cout << "Move dick " << n << " from " << a << " to " << c << endl;
    } else {
        TowerofHanio(n - 1, a, c, b);
        cout << "Move dick " << n << " from " << a << " to " << c << endl;
        TowerofHanio(n - 1, b, a, c);
    }
}

int main()
{
    int n;
    cout << "Please enter the layer of towers:";
    cin >> n;
    TowerofHanio(n, 'A', 'B', 'c');
    cout << endl;
    return 0;
}
