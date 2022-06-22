/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：human.cpp
*   创 建 者：lgd
*   创建日期：2021年02月13日
*   邮    箱: lgd1447210528@gmail.com
*
================================================================*/

#include <iostream>
#include <string>
using namespace std;

class Human {
private:
    string name;
    int age;

public:
    Human()
    {
        age = 1;
        cout << "Construced an instance of class Human." << endl;
    }
    Human(string humanName, int humanAge)
    {
        name = humanName;
        age = humanAge;
        cout << "Overloaded constructor creates " << name << " of age " << age << endl;
    }
    void SetName(string humanName)
    {
        name = humanName;
    }
    void SetAge(int humanAge)
    {
        age = humanAge;
    }
    void IntroduceSelf()
    {
        cout << "I'm " << name << " and am " << age << " years old." << endl;
    }
};

int main()
{
    Human firstMan;
    firstMan.SetAge(28);
    firstMan.SetName("Adam");
    firstMan.IntroduceSelf();
    return 0;
}
