#include <iostream>
using namespace std;

int Sum(int a, int b)
{
    return a + b;
}

double Sum(double a, double b)
{
    return a + b;
}

int Sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << Sum(5, 7) << endl;
    cout << Sum(2.3, 8.5) << endl;
    cout << Sum(5, 5, 4);
}