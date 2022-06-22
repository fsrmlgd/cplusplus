/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：factorial.cpp
*   创 建 者：lgd
*   创建日期：2021年10月26日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <iomanip>
#include <iostream>
using namespace std;
unsigned long factorial(unsigned int number)
{
    unsigned long result = 1;
    for (unsigned int i = number; i >= 1; --i) {
        result *= i;
    }
    return result;
}

int main()
{
    for (unsigned int counter = 0; counter <= 10; ++counter) {
        cout << setw(2) << counter << "!= " << factorial(counter) << endl;
    }
    return 0;
}
