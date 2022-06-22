/* charcode.C */
#include <stdio.h>
int main(void)
{
    int ch = 50;
    bool one = 1;
    bool zero = 0;
    bool then = one + zero;
    printf("then is %d.\n", then);

    while (ch <= 127) {
        printf("The code for %c is %d.\n", ch, ch);
        ch += 1;
    }
    return 0;
}
