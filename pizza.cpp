#include <stdio.h>
#define PI 3.1415926
int main(void)
{
    double area, circum, radius;
    printf("What is the radius of your pizza?\n");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);
    printf("Is %2.2e the same as %2.2f?\n",1201.0,1201.0);
    return 0;
}