/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：vec.cpp
*   创 建 者：lgd
*   创建日期：2021年09月10日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    cout << "vector size = " << vec.size() << endl;
    for (int i = 0; i < 5; i++) {
        vec.push_back(i);
    }
    cout << "extended vector size = " << vec.size() << endl;
    for (int i = 0; i < 5; i++) {
        cout << "value of vec[" << i << "] = " << vec[i] << endl;
    }
    vector<int>::iterator v = vec.begin();
    while (v != vec.end()) {
        cout << "value of v = " << *v << endl;
        v++;
    }
    return 0;
}
