#include <stdio.h>
const char FORMAT[20] = "%s! C is cool!\n";
int main()
{
    int num = 9;
    while (num-- > 1)
    {
        printf("num is %d, %s! C is cool!\n", num, FORMAT);
    }
    return 0;
}