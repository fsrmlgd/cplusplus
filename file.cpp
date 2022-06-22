//fileio.cpp -- saving to a file
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string filename;
    cout << "Enter name for new file: ";
    cin >> filename;
    filename = "/home/fsrmlgd/Desktop/" + filename;
    //create output stream object for file
    ofstream fout(filename.c_str(),ios_base::out|ios_base::app|ios_base::binary);
    fout << "For your eyes only!\n";
    cout << "Enter your secret number: ";
    float secret;
    cin >> secret;
    fout << "Your secret number is " << secret << endl;
    fout.close();
    //create input stream object for new file
    ifstream fin(filename.c_str());
    cout << "Here are the contents of " << filename << ":\n";
    char ch;
    while (fin.get(ch))
    {
        cout << ch;
    }
    cout << "Done" << endl;
    fin.close();
    return 0;
}