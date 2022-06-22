#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    vector<int> total;
    int i;
    cout << "Input your number (q/Q for quit): ";
    while (cin >> i)
    {
        if (i == 'q' && i == 'Q')
            break;
        total.push_back(i);
        cout << "Input your number (q/Q for quit): ";
    }
    for (auto it = total.cbegin();it != total.cend();it++)
    {
        cout<<*it<<" ";
    }
    cout << endl;
    return 0;
}