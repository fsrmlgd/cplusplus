#include <iostream>
int main()
{
    using namespace std;
    cout <<"please type in:\n";
    char ch;
    int space = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.')
    {
        if (ch == ' ')
            space++;
        total++;
        cin.get(ch);
    }
    cout << space << " spaces," << total;
    cout << "characters total in sentence\n";
    return 0;
}