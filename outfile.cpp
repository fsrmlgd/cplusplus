#include <iostream>
#include <fstream>
int main()
{
    using namespace std;
    char automibile[50];
    int year;
    double a_price;
    double d_price;
    cout << "enter automobile:";
    cin.getline(automibile, 50);
    cout << "enter year:";
    cin >> year;
    cout << "enter the price:";
    cin >> a_price;
    d_price = 0.913 * a_price;

    // display info
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "make and model:" << automibile << endl;
    cout << "year:" << year << endl;
    cout << "now asking $" << d_price << endl;
    cout << "was asking $" << a_price << endl;

    // outfile
    ofstream outfile;
    outfile.open("carinfo.txt");
    outfile << fixed;
    outfile.precision(2);
    outfile.setf(ios_base::showpoint);
    outfile << "make and model:" << automibile << endl;
    outfile << "year:" << year << endl;
    outfile << "now asking $" << d_price << endl;
    outfile << "was asking $" << a_price << endl;
    outfile.close();
    return 0;
}