#include <iostream>
using namespace std;


void foo(int a = 5)
{
    for (int i = 0; i < a; i++)
        cout << "# " <<  i + 1 << endl;
}

int main()
{
    foo(20);
    cout << endl;
    foo();
}