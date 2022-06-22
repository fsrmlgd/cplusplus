/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：timetest.cpp
*   创 建 者：lgd
*   创建日期：2021年10月30日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include "Time.h"
#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    Time t;
    cout << "The initial universal time is ";
    t.printUniversal();
    cout << endl
         << "The initial standard time is ";
    t.printStandard();
    t.setTime(13, 27, 6);
    cout << endl;
    cout << "The initial universal time is ";
    t.printUniversal();
    cout << endl
         << "The initial standard time is ";
    t.printStandard();
    try {
        t.setTime(99, 99, 99);
    } catch (invalid_argument& e) {
        cout << "Exception: " << e.what() << endl;
    }
    cout << "\n\nAfter attempting invalid settings:\nUniversal time:";
    t.printUniversal();
    cout << "\nStandard time: ";
    t.printStandard();
    cout << endl;
    return 0;
}
