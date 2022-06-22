/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：divisors.cpp
*   创 建 者：lgd
*   创建日期：2021年07月30日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <stdio.h>
int main()
{
    unsigned long num;
    unsigned long div;
    bool isPrime;
    printf("Please enter an integer for analysis (Enter q to quit):");
    while (scanf("%lu", &num) == 1) {
        for (div = 2, isPrime = true; (div * div) <= num; div++) {
            if (num % div == 0) {
                if ((div * div) != num)
                    printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
                else
                    printf("%lu is divisible by %lu.\n", num, div);
                isPrime = false;
            }
        }
        if (isPrime)
            printf("%lu is Prime.\n", num);
        printf("Please enter another integer for analysis (Enter q to quit):");
        printf("Please enter another integer for analysis (Enter q to quit):");
    }
    printf("Bye.\n");
    return 0;
}
