/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：platinum.cpp
*   创 建 者：lgd
*   创建日期：2021年07月24日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <stdio.h>
int main(void)
{
    float weight, value;
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");
    /* geting users input*/
    scanf("%f", &weight);
    value = 1700 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n eat more to maintain your value.\n");
    return 0;
}
