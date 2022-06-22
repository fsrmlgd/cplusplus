/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：President.cpp
*   创 建 者：lgd
*   创建日期：2021年02月14日
*   邮    箱: lgd1447210528@gmail.com
*
================================================================*/

#include <iostream>
#include <string>
using namespace std;

class President {
private:
    President() {};
    President(const President&);
    const President& operator=(const President&);
    string name;

public:
    static President& GetInstance()
    {
        static President onlyInstance;
        return onlyInstance;
    }
    string Getname()
    {
        return name;
    }
    void SetName(string InputName)
    {
        name = InputName;
    }
};

int main()
{
    President& onlyInstance = President::GetInstance();
    onlyInstance.SetName("Abraham Lincoln");
    cout << "The name of the President is: " << onlyInstance.Getname() <<"."<< endl;
    return 0;
}
