#include <iostream>
using namespace std;
int main()
{
    int *pointsToAnAge = new int[3];
    for (int counter = 0; counter < 3; ++counter)
    {
        cout << "Enter nember " << counter << ": ";
        cin >> *(pointsToAnAge + counter);
    }
    for (int counter = 0; counter < 3; ++counter)
    {
        cout << *(pointsToAnAge++) << " ";
    }
    cout << endl;
    pointsToAnAge -= 3;
    cout << *(pointsToAnAge++) << endl;
    cout << *(pointsToAnAge++) << endl;
    cout << *(pointsToAnAge++) << endl;
    pointsToAnAge -= 3;
    delete[] pointsToAnAge;
    return 0;
}