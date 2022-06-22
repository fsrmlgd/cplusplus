#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x=0;
    int y=42;
    auto qqq=[x,&y]{
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
        ++y;  //OK
    };
    qqq();
    qqq();
    qqq();
    cout<<"final y: "<<y<<endl;
    return 0;
}