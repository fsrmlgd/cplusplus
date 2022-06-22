/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：function.cpp
*   创 建 者：lgd
*   创建日期：2021年11月07日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <algorithm>
#include <array>
#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
using namespace std;

int sumSquares(int total, int value)
{
    return total + value * value;
}

template <typename T>
class SumSquaresClass {
public:
    T operator()(const T& total, const T& value)
    {
        return total + value * value;
    }
};

int main()
{
    const size_t SIZE = 10;
    array<int, SIZE> integers = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    array<double, 5> doubles = { 1.1, 2.2, 3.3, 4.5, 5.6 };
    ostream_iterator<int> output(cout, " ");
    cout << "array integers contains:\n";
    copy(integers.cbegin(), integers.cend(), output);
    cout << endl;
    int result1 = accumulate(integers.cbegin(), integers.cend(), 0, sumSquares);
    cout << "function sumSquares: " << result1 << endl;
    double result2 = accumulate(doubles.cbegin(), doubles.cend(), 0, SumSquaresClass<int>());
    cout << "function object: " << result2 << endl;
    return 0;
}
