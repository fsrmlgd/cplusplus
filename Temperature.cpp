/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：Temperature.cpp
*   创 建 者：lgd
*   创建日期：2021年03月13日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <iostream>
using namespace std;

struct Temperature {
    double Kelvin;
    Temperature(long double kelvin)
    {
        Kelvin = kelvin;
    }
};

Temperature operator""_C(long double celcius)
{
    return Temperature(celcius + 273);
}

Temperature operator""_F(long double fahrenheit)
{
    return Temperature((fahrenheit + 459.67) * 5 / 9);
}

int main()
{
    Temperature k1 = 31.73_F;
    Temperature k2 = 0.0_C;
    cout << "k1 is " << k1.Kelvin << " Kelvin" << endl;
    cout << "k2 is " << k2.Kelvin << " Kelvin" << endl;
    return 0;
}
