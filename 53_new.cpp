#include <iostream>
using namespace std;

int main()
{
    int *pa = new int;

    *pa = 10;
    cout << pa << endl;
    cout << *pa << endl;
    delete pa;
}