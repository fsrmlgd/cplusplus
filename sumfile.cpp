#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;
int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream infile;
    cout << "enter name of data file:";
    cin.getline(filename, SIZE);
    infile.open(filename);
    if (!infile.is_open())
    {
        cout << "count not open the file:" << filename << endl;
        cout << "kill program!";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0;
    int count = 0;
    infile >> value;
    cout<<value<<" ";
    while (infile.good())
    {
        ++count;
        sum += value;
        infile >> value;
        cout<<value<<" ";
    }
    if (infile.eof())
        cout << "end of file reached.";
    else if (infile.fail())
        cout << "input terminated" << endl;
    if (count == 0)
        cout << "No data";
    else
    {
        cout << "data:" << count << endl;
        cout << "sum:" << sum << endl;
        cout << "average:" << sum / count << endl;
    }
    infile.close();
    return 0;
}