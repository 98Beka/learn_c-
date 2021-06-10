#include <iostream>
using namespace std;

void Foo1(int &a)
{
    a = a + 1;
}

void Foo2(int *a)
{
    *a = *a + 1;
}

int main()
{
    int a = 5;

    cout << "a = " << a << endl;
    Foo1(a);
    cout << "Foo1\t" << a << endl;
    Foo2(&a);
    cout << "Foo2\t" << a << endl;
    
}