/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：Month.cpp
*   创 建 者：lgd
*   创建日期：2021年08月04日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <stdio.h>
const int MONTH = 12;
int main()
{
    int days[MONTH] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    for (int index = 0; index < MONTH; ++index) {
        printf("Month %-2d has %2d days.\n", index + 1, days[index]);
    }
    return 0;
}
