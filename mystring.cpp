/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：mystring.cpp
*   创 建 者：lgd
*   创建日期：2021年03月13日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <iostream>
#include <string.h>
using namespace std;

class MyString {
private:
    /* data */
    char* buffer;
    MyString()
    {
        buffer = NULL;
        cout << "Default constructor called" << endl;
    }

public:
    MyString(const char* initialInput)
    {
        cout << "Constructor called for:" << initialInput << endl;
        if (initialInput != NULL) {
            buffer = new char[strlen(initialInput) + 1];
            strcpy(buffer, initialInput);
        } else
            buffer = NULL;
    }

    MyString(MyString&& moveSrc)
    {
        cout << "Move constructor moves: " << moveSrc.buffer << endl;
        if (moveSrc.buffer != NULL) {
            buffer = moveSrc.buffer;
            moveSrc.buffer = NULL;
        }
    }

    MyString& operator=(MyString&& moveSrc)
    {
        cout << "Move assignment op. moves: " << moveSrc.buffer << endl;
        if ((moveSrc.buffer != NULL) && (this != &moveSrc)) {
            delete[] buffer;
            buffer = moveSrc.buffer;
            moveSrc.buffer = NULL;
        }
        return *this;
    }

    MyString(const MyString& copySrc)
    {
        cout << "Copy constructor copies: " << copySrc.buffer << endl;
        if (copySrc.buffer != NULL) {
            buffer = new char[strlen(copySrc.buffer) + 1];
            strcpy(buffer, copySrc.buffer);
        } else
            buffer = NULL;
    }

    MyString& operator=(const MyString& copySrc)
    {
        cout << "Copy assignment op. copies: " << copySrc.buffer << endl;
        if ((this != &copySrc) && (copySrc.buffer != NULL)) {
            if (buffer != NULL)
                delete[] buffer;
            buffer = new char[strlen(copySrc.buffer) + 1];
            strcpy(buffer, copySrc.buffer);
        }
        return *this;
    }
    ~MyString()
    {
        if (buffer != NULL)
            delete[] buffer;
    }

    int GetLength()
    {
        return strlen(buffer);
    }

    operator const char*()
    {
        return buffer;
    }

    MyString operator+(const MyString& addThis)
    {
        cout << "operator+ called: " << endl;
        MyString newStr;
        if (addThis.buffer != NULL) {
            newStr = new char[GetLength() + strlen(addThis.buffer) + 1];
            strcpy(newStr.buffer, buffer);
            strcat(newStr.buffer, addThis.buffer);
        }
        return newStr;
    }
};

int main()
{
    MyString Hello("Hello ");
    MyString World("World");
    MyString CPP(" of C++");
    MyString sayHelloAgain("overwrite this");
    sayHelloAgain = Hello + World + CPP;
    return 0;
}
