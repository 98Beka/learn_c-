#include <iostream>
using namespace std;
#define DEBUG 3

int main()
{
    #if DEBUG == 3
        cout << 3 << endl;
    #elif DEBUG == 2
        cout << 2 << endl;
    #else
        cout << 1 << endl;
    #endif

    #ifndef DEBUG
    cout << 0 << endl;
    #endif
}