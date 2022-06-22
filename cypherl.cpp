/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：cypherl.cpp
*   创 建 者：lgd
*   创建日期：2021年07月29日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <stdio.h>
const char SPACE = ' ';
int main(void)
{
    char ch;
    while ((ch = getchar()) != '\n') {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 3);
    }
    putchar(ch);
    return 0;
}
