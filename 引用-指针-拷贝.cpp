#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int *p = &a;
    int &q = a;
    int b = a + 1;
    cout << "a = " << a << " &a = " << &a << endl;
    cout << "p = " << p << " *p = " << *p << endl;
    cout << "q = " << q << " &q = " << &q << endl;
    cout << "b = " << b << " &b = " << &b << endl;
    return 0;
}
