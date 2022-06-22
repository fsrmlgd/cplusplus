/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：rand0.cpp
*   创 建 者：lgd
*   创建日期：2021年08月07日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <stdio.h>
#include <time.h>
static unsigned long int next = time(0);
unsigned int rand0(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int)(next % 32768);
}

int main()
{
    printf("%d\n", rand0());
    return 0;
}
