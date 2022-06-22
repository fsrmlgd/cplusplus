/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：this.cpp
*   创 建 者：lgd
*   创建日期：2021年10月31日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <iostream>
using namespace std;

class Test {
private:
    int x;

public:
    explicit Test(int = 0);
    void print() const;
};

Test::Test(int value)
{
    x = value;
}

void Test::print() const
{
    cout << "           x = " << x;
    cout << "\n     this->x = " << this->x;
    cout << "\n   (*this).x = " << (*this).x;
}

int main()
{
    Test testobject(12);
    testobject.print();
    return 0;
}
