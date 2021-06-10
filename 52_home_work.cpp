#include <iostream>
using namespace std;

template <typename T1, typename T2>
void Swap(T1 &a, T2 &b)
{
    T1 tmp;

    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a = 5;
    double b = 6.5;
    float c = 3.666;

    Swap(c, b);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}