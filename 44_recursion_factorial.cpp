#include <iostream>
using namespace std;

//factorial
//N! = N * (N-1)!

int Fact(int N)
{
    if (N == 0)
        return 0;
    if (N == 1)
        return 1;
    return N * Fact(N - 1);
}
int main(int c, char **v)
{
    if (c == 1)
        cout << "program need one argument";
    Fact(5);
    cout << Fact(stoi(v[1])) << endl;
}