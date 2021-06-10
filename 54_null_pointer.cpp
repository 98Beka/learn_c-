#include <iostream>
using namespace std;

void w(int *pa)
{
    if (!pa)
    {
        cout << "pinter \"a\" is empty" << endl;
        return ;
    }
    cout << pa << endl;
    cout << *pa << endl;
}

int main()
{
    int *pa = new int;

    *pa = 10;
    w(pa);
    delete pa;
    pa = nullptr;
    w(pa);
}