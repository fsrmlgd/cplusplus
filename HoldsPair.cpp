/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：HoldsPair.cpp
*   创 建 者：lgd
*   创建日期：2021年03月22日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <iostream>
using namespace std;

template <typename T1 = int, typename T2 = double>
class HoldsPair {
private:
    /* data */
    T1 value1;
    T2 value2;

public:
    HoldsPair(const T1& val1, const T2& val2)
    {
        value1 = val1;
        value2 = val2;
    }
    const T1& GetFirstValue() const
    {
        return value1;
    } 
    const T2& GetSecondValue() const
    {
        return value2;
    }
};

int main()
{
    HoldsPair<> pair(300, 10.09);
    cout << "pair contains:" << endl;
    cout << "Value 1:" << pair.GetFirstValue() << endl;
    cout << "Value 2:" << pair.GetSecondValue() << endl;
    return 0;
}
