/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：echo.cpp
*   创 建 者：lgd
*   创建日期：2021年08月02日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <stdio.h>
int main()
{
    char ch;
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
    putchar('\n');
    return 0;
}
