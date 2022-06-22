/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：qsorter.cpp
*   创 建 者：lgd
*   创建日期：2021年08月10日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <stdio.h>
#include <stdlib.h>
const int NUM = 48;
void fillarray(double ar[], int n);
void showarray(const double ar[], int n);
int mycomp(const void* pl, const void* p2);

int main()
{
    double vals[NUM];
    fillarray(vals, NUM);
    puts("Random list:");
    showarray(vals, NUM);
    qsort(vals, NUM, sizeof(double), mycomp);
    puts("\nSorted list:");
    showarray(vals, NUM);
    return 0;
}

void fillarray(double ar[], int n)
{
    for (int index = 0; index < n; index++) {
        ar[index] = (double)rand() / ((double)rand() + 0.1);
    }
}

void showarray(const double ar[], int n)
{
    int index;
    for (index = 0; index < n; index++) {
        printf("%9.4f ", ar[index]);
        if (index % 6 == 5)
            putchar('\n');
    }
    if (index % 6 != 0)
        putchar('\n');
}

int mycomp(const void* p1, const void* p2)
{
    const double* a1 = (const double*)p1;
    const double* a2 = (const double*)p2;
    if (*a1 < *a2)
        return -1;
    else if (*a1 == *a2)
        return 0;
    else
        return 1;
}
