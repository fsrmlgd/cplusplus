/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：sum_arr.cpp
*   创 建 者：lgd
*   创建日期：2021年08月05日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <stdio.h>
const int SIZE = 10;
int sum(int ar[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += ar[i];
    }
    printf("The size of ar is %zd bytes.\n", sizeof(ar));
    return total;
}

int sump(int* start, int* end)
{
    int total = 0;
    while (start < end) {
        total += *start;
        start++;
    }
    return total;
}

int main()
{
    int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
    int answer1 = sum(marbles, SIZE);
    int answer2 = sump(marbles, marbles + SIZE);
    printf("The total answer of marbles is %d.\n", answer1);
    printf("The total answer of marbles is %d.\n", answer2);
    printf("The size of marbles is %zd bytes.\n", sizeof(marbles));
    return 0;
}
