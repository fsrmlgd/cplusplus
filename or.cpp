#include<iostream>
int main()
{
    using namespace std;
    cout <<"nonsence\n";
    char ch;
    cin >>ch;
    if (ch=='Y'||ch=='y')
        cout<<"You were warned!\a\a\n";
    else if (ch=='N'||ch=='n')
        cout<<"A wise chiose bye\n";
    else
    {
        cout <<"that is not y or n!\n";
    }
    return 0;
}