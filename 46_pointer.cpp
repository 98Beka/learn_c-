#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    int *pa = &a;

    cout << "*pa\t" << *pa << endl;
    cout << "pa\t" << pa << endl;
}