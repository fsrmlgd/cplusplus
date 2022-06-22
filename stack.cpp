/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：stack.cpp
*   创 建 者：lgd
*   创建日期：2021年11月27日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include "stack.h"
#include <cstddef>
#include <iostream>
using namespace std;

int main()
{
    Stack<double> doubleStack;
    const size_t doubleStacksize = 5;
    double V = 1.1;
    cout << "Pushing elements onto doubleStack" << endl;
    for (size_t i = 0; i < doubleStacksize; ++i) {
        doubleStack.push(V);
        cout << V << " ";
        V += 1.1;
    }
    cout << endl
         << endl
         << "Popping elements from doubleStack" << endl;
    while (!doubleStack.isEmpty()) {
        cout << doubleStack.top() << " ";
        doubleStack.pop();
    }
    cout << endl
         << endl
         << "Stack is empty, cannot pop." << endl;
    return 0;
}
