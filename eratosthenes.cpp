/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：eratosthenes.cpp
*   创 建 者：lgd
*   创建日期：2021年10月29日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> eratosthenes(int upperbound);

int main()
{
    int number;
    cout << "Enter the number:";
    cin >> number;
    auto list = eratosthenes(number);
    for (int i = 0; i < list.size(); ++i)
        cout << list[i] << endl;
    cout << endl;
    return 0;
}

vector<int> eratosthenes(int upperbound)
{
    vector<bool> flag(upperbound, true);
    vector<int> nlist;
    flag[0] = flag[1] = false;
    for (int i = 2; i * i <= upperbound; ++i) {
        if (flag[i]) {
            for (int j = i * i; j < upperbound; j += i)
                flag[j] = false;
        }
    }
    for (int i = 0; i < flag.size(); i++) {
        if (flag[i] == true)
            nlist.push_back(i);
    }
    return nlist;
}
