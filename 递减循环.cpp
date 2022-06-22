#include <iostream>
int main()
{
    int i = 10;
    while (i > 0)
    {
        std::cout << "  i = " << i << std::endl;
        int j;
        j = i--;
        std::cout << "--i = " << i << std::endl;
        std::cout << "  j = " << i << std::endl;
    }
    return 0;
}