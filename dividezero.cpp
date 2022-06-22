/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：dividezero.cpp
*   创 建 者：lgd
*   创建日期：2021年11月07日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <iostream>
#include <stdexcept>
using namespace std;

class DivideByException : public runtime_error {
public:
    DivideByException()
        : runtime_error("attempted to divide by zero")
    {
    }
};

double quotient(int numerator, int denominator)
{
    if (denominator == 0)
        throw DivideByException();
    return double(numerator) / denominator;
}

int main()
{
    int number1, number2;
    cout << "Enter two integers (end-of-file to end): ";
    while (cin >> number1 >> number2) {
        try {
            double result = quotient(number1, number2);
            cout << "The quotient is: " << result << endl;
        } catch (DivideByException& divideByException) {
            cout << "Exception occurred: " << divideByException.what() << endl;
        }
    }
    return 0;
}
