/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：fig6.cpp
*   创 建 者：lgd
*   创建日期：2021年10月15日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <ctime>
#include <iomanip>
#include <iostream>
#include <random>
using namespace std;

int main()
{
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1, 6);

    for (unsigned int counter = 1; counter <= 10; ++counter) {
        cout << setw(10) << randomInt(engine);
        if (counter % 5 == 0) {
            cout << endl;
        }
    }
    return 0;
}
