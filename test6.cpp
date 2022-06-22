#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    double number;
    string name;
    double money;
    ifstream infile;
    infile.open("a.txt");
    if (!infile.is_open())
    {
        cout << "count not open the file:a.txt" << endl;
        cout << "kill program!";
        exit(EXIT_FAILURE);
    }
    infile>>number;
    cout<<"number: "<<number<<endl;
    while (!infile.eof())
    {
        infile>>name;
        cout<<"name:"<<name<<endl;
        infile>>money;
        cout<<"money: "<<money<<endl;
    }
    return 0;
}