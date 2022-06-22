/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：rain.cpp
*   创 建 者：lgd
*   创建日期：2021年08月04日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <stdio.h>
const int MONTHS = 12;
const int YEARS = 5;
int main()
{
    //用2010-2014年的降水量数据初始化数组
    const float rain[YEARS][MONTHS] = {
        { 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
        { 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
        { 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
        { 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.9, 0.3, 0.9, 1.4 },
        { 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.9, 0.3, 0.9, 1.4 }
    };

    int year,
        month;
    float subtot, total;
    printf(" YEAR RAINFALL  (inches)\n");
    for (year = 0, total = 0; year < YEARS; year++) {
        for (month = 0, subtot = 0; month < MONTHS; month++) {
            subtot += rain[year][month];
        }
        printf("%5d %15.1f\n", year + 2010, subtot);
        total += subtot;
    }

    printf("\nThe yearly average is %.1f inches.\n\nMONTHLY AVERAGES:\n\n", total / YEARS);
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

    for (month = 0; month < MONTHS; month++) {
        for (year = 0, subtot = 0; year < YEARS; year++) {
            subtot += rain[year][month];
        }
        printf("%3.1f ", subtot / YEARS);
    }
    printf("\n");
    return 0;
}
