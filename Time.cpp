/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：Time.cpp
*   创 建 者：lgd
*   创建日期：2021年10月30日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include "Time.h"
#include <iomanip>
#include <iostream>
#include <stdexcept>
using namespace std;

Time::Time()
    : hour(0)
    , minute(0)
    , second(0)
{
}

void Time::setTime(int h, int m, int s)
{
    if ((h >= 0 && h <= 24) && (m >= 0 && m <= 60) && (s >= 0 && s < 60)) {
        hour = h;
        minute = m;
        second = s;
    } else
        throw invalid_argument("hour,minute and/or second was out of range");
}

void Time::printUniversal() const
{
    cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
}

void Time::printStandard() const
{
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
         << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? " AM" : " PM");
}
