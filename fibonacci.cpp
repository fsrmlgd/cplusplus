/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：fibonacci.cpp
*   创 建 者：lgd
*   创建日期：2021年10月23日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <iostream>
#include <sciplot/sciplot.hpp>
#include <vector>
using namespace sciplot;
using namespace std;

unsigned long fibonacci(unsigned long number)
{
    if ((number == 0) || (number == 1))
        return number;
    else
        return fibonacci(number - 1) + fibonacci(number - 2);
}

int main()
{
    vector<unsigned long> x, y;
    for (unsigned int counter = 1; counter <= 30; ++counter) {
        x.push_back(counter);
        y.push_back(fibonacci(counter));
    }
    Plot plot;
    plot.drawCurve(x, y);
    plot.save("fibonacci.pdf");
    return 0;
}
