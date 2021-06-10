#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    int *pa = &a;
    int &aref = a; //ссылкла

    cout << "*pa\t" << *pa << endl;
    cout << "pa\t" << pa << endl;
    cout << "aref\t" << aref << endl;
    cout << "&aref\t" << &aref << endl;
}