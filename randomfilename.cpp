#include <cstdio>
#include <iostream>
#include<fstream>
int main()
{
    using namespace std;
    string filename = "/home/fsrmlgd/Desktop/b.txt";
    ofstream fout(filename);
    cout << "This system can gennerate up to " << TMP_MAX
         << " temporary names of up to " << L_tmpnam
         << " characters." << endl;
    char pszname[L_tmpnam] = {'\0'};
    for (int i = 0; i < 200000; i++)
    {
        tmpnam(pszname);
        //cout << pszname << endl;
        fout << pszname << endl;
    }
    fout.close();
    return 0;
}