#include <iostream>
using namespace std;

template <typename T>
T Sum_1(T a, T b)
{
    return a + b;
}

template <typename T1, typename T2>
T1 Sum_2(T1 a, T2 b)
{
    return a + b;
}

int main()
{
    cout << "Sum_1:" << endl;
    cout << "5 + 10 = " << Sum_1(5, 10) << endl;
    cout << "5.5 + 1.2 = " << Sum_1(5.5, 1.2) << endl;
    cout << endl;
    cout << "Sum_2:" << endl;
    cout << "5 + 10 = " << Sum_2(5.5, 10) << endl;
}