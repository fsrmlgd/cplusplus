/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：predef.cpp
*   创 建 者：lgd
*   创建日期：2021年08月10日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <stdio.h>
void why_me()
{
    printf("This function is %s\n", __func__);
    printf("This is line %d.\n", __LINE__);
}

int main()
{
    printf("The file is %s.\n", __FILE__);
    printf("The date is %s.\n", __DATE__);
    printf("The time is %s.\n", __TIME__);
    printf("The version is %s.\n", __VERSION__);
    printf("The is line %d.\n", __LINE__);
    printf("This function is %s.\n", __func__);
    why_me();
    return 0;
}
