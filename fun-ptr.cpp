//fun_ptr.cpp -- pointers to functons
#include<iostream>
using namespace std;
double betsy(int);
double pam(int);
void estimate(int lines,double (*pf)(int));

int main()
{
    int code;
    cout<<"How many lines od code do you need?";
    cin>>code;
    cout<<"Here's Besty's estimate:"<<endl;
    estimate(code,betsy);
    cout<<"Here's Pam's estimate:"<<endl;
    estimate(code,pam);
    return 0;
}

double betsy(int lns)
{
    return 0.05*lns;
}

double pam(int lns)
{
    return 0.03*lns+0.004*lns*lns;
}

void estimate(int lines,double (*pf)(int))
{
    cout<<lines<<" lines will take ";
    cout<<(*pf)(lines)<<" hours"<<endl;
}
