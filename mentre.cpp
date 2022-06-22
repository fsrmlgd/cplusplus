/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：mentre.cpp
*   创 建 者：lgd
*   创建日期：2021年08月14日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
const int distance = 1;
double compute(int n);

int main()
{
    printf("The value of pi is %.5f.\n", compute(100));
    printf("The value of pi is %.5f.\n", compute(1000));
    printf("The value of pi is %.5f.\n", compute(10000));
    printf("The value of pi is %.5f.\n", compute(100000));
    printf("The value of pi is %.5f.\n", compute(1000000));
    return 0;
}

double compute(int n)
{
    double index;
    double count = 0;
    for (index = 0; index <= n; index++)
    {
        double x = rand() / (RAND_MAX + 1.0);
        double y = rand() / (RAND_MAX + 1.0);
        double radius = sqrt(pow(x, 2) + pow(y, 2));
        if (radius <= distance)
            count++;
    }
    return (count / index) * 4;
}
