// strtile.cpp -- read string from a file
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main()
{
    using namespace std;
    ifstream fin;
    fin.open("a.txt");
    if (fin.is_open() == false)
    {
        cerr << "Can't open file.Bye\n";
        exit(EXIT_FAILURE);
    }
    string total;
    string item;
    int count = 0;
    getline(fin, item, '\n');
    while (fin)
    {
        ++count;
        cout << count << ":" << item << endl;
        cout<<total<<endl;
        total += item+'+';
        getline(fin, item, '\n');
    }
    cout<<"string total: "<<total.length()<<" "<<total;
    cout << "Done\n";
    return 0;
}