/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：wordtower.cpp
*   创 建 者：lgd
*   创建日期：2021年11月27日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string words = "abcdefghijklmnopgrstuvwxyz{";
    int n = words.find("n");
    for (int i = 0; i <= n; i++) {
        for (int f = n - i; f > 0; f--) {
            cout << "  ";
        }
        for (int j = i; j < 2 * i + 1; j++) {
            cout << words[j] << " ";
        }
        for (int j = 2 * i; j > i; j--) {
            cout << words[j - 1] << " ";
        }
        cout << endl;
    }
    return 0;
}
