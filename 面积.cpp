#include <iostream>
using namespace std;

const double Pi = 3.14159265;
double Area(double radius)
{
    return Pi * radius * radius;
}
double Circumference(double radius)
{
    return 2 * Pi * radius;
}

int main()
{
    cout << "Enter your radius: ";
    double radius = 0;
    cin >> radius;
    cout << "Area is: " << Area(radius) << endl;
    cout << "Circumference is: " << Circumference(radius) << endl;
    return 0;
}