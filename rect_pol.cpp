/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：rect_pol.cpp
*   创 建 者：lgd
*   创建日期：2021年08月10日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <math.h>
#include <stdio.h>
#define RAD_TO_DEG (180 / (4 * atan(1)))

struct polar_v {
    double magnitude;
    double angle;
};

struct rect_v {
    double x;
    double y;
};

polar_v rect_to_polar(rect_v rv)
{
    polar_v pv;
    pv.magnitude = sqrt(rv.x * rv.x + rv.y + rv.y);
    if (pv.magnitude == 0)
        pv.angle = 0;
    else
        pv.angle = RAD_TO_DEG * atan2(rv.y, rv.x);
    return pv;
}

int main()
{
    polar_v result;
    rect_v input;
    printf("Enter x and y coordinates; enter q to quit:");
    while (scanf("%lf %lf", &input.x, &input.y) == 2) {
        result = rect_to_polar(input);
        printf("magnitude = %0.2f, angle = %0.2f\n", result.magnitude, result.angle);
    }
    puts("Bye.");
    return 0;
}
