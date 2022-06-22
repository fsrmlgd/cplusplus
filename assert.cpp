/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：assert.cpp
*   创 建 者：lgd
*   创建日期：2021年03月19日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <iostream>
#include <assert.h>

int main()
{
    char* sayhello = new char[25];
    assert(sayhello != NULL);
    *sayhello = 'o';
    std::cout << sayhello << std::endl;
    return 0;
}
