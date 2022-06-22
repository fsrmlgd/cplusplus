//str2.cpp -- capacity() and reserve()
#include <iostream>
#include <string>

int main()
{
     using namespace std;
     string empty;
     string small = "bit";
     string large = "Elephants are a girl's best friend.";
     cout << "Sizes:" << endl
          << "\tempty: " << empty.size() << endl
          << "\tsmall: " << small.size() << endl
          << "\tlarge: " << large.size() << endl
          << "Capacities:" << endl
          << "\tempty: " << empty.capacity() << endl
          << "\tsmall: " << small.capacity() << endl
          << "\tlarge: " << large.capacity() << endl;
     empty.reserve(50);
     cout << "Capacity after empty.reserve(50): "
          << empty.capacity() << endl;
     return 0;
}