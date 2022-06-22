/* manip.cpp -- using format manipulators */
#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter an interger: ";
    int n;
    cin >> n;
    cout << "n    n*n" << endl;
    cout << n << "    " << n * n << " (decimal)" << endl;
    //set to hex mode
    cout << hex << n << "    " << n * n << " (hexadecimal)" << endl;
    //set to octal mode
    cout << oct << n << "    " << n * n << " (octal)" << endl;
    // alternative way to call a manipulator
    cout << dec << n << "    " << n * n << " (decimal)" << endl;
    return 0;
}
