#include <math.h>
#include <stdio.h>
void compute(int count)
{
    double i = 1.0;
    double sum = 0;
    while (i <= count) {
        sum += 1 / i;
        ++i;
    }
    printf("%d, %f.\n", count, sum);
}

int main()
{
    for (int j = 1; j <= 50000; j++) {
        compute(j);
    }
    return 0;
}
