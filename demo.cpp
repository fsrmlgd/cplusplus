#include <iostream>

const int ArSize = 20;
int main()
{
    unsigned long long factorials[ArSize];
    factorials[0] = 1;
    factorials[1] = 1;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = factorials[i - 1]*i;
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i]<<std::endl;
    return 0;
}