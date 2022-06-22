#include <stdio.h>
#include <float.h>
int main()
{
    float onedevidebythree_1 = 1.0 / 3.0;
    double onedevidebythree_2 = 1.0 / 3.0;
    printf("first float  is %20.6f.\n", onedevidebythree_1);
    printf("first float  is %20.12f.\n", onedevidebythree_1);
    printf("first float  is %20.16f.\n", onedevidebythree_1);
    printf("first double is %20.6f.\n", onedevidebythree_2);
    printf("first double is %20.12f.\n", onedevidebythree_2);
    printf("first double is %20.18f.\n", onedevidebythree_2);
    printf("FLT_DIG is %2d In float.h.\n", FLT_DIG);
    printf("DBL_DIG is %d In float.h.\n", DBL_DIG);
    return 0;
}