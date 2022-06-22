#include <stdio.h>
const int SQUARES = 64;
const double CROP = 2e16;

int main()
{
    double current = 1;
    double total = 1;
    int count = 1;

    printf("square     grains added     total grains     fraction of world total.\n");
    while (count <= SQUARES)
    {
        printf("%4d %16.2e %16.2e %20.2e\n", count, current, total, total / CROP);
        total = total + 2.0 * current;
        current = 2.0 * current;
        count += 1;
    }
    printf("That's all.\n");
    return 0;
}