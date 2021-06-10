#include <iostream>
using namespace std;

string foo()
{
    return "this is function!!!";
}

int main()
{
    string(*pf)(); //pointer to function

    pf = foo;
    cout << pf() << endl;
}