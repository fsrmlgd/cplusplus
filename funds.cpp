/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：funds.cpp
*   创 建 者：lgd
*   创建日期：2021年08月10日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <stdio.h>
const int FUNDLEN = 50;

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(const struct funds*);

int main()
{
    struct funds stan = {
        "Garlic-Melon Bank",
        4032.7,
        "Lucky's Savings and Loan",
        8543.94
    };
    printf("Stan has a total of $%.2f.\n", sum(&stan));
    return 0;
}

double sum(const struct funds* money)
{
    return (money->bankfund + money->savefund);
}
