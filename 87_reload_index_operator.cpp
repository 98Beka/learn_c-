#include <iostream>
using namespace std;

class MyCalss
{
public:
    int &operator[](int index)
    {
        return arr[index];
    }
private:
    int arr[5]{4, 5, 6, 7, 8};
};
int main()
{
    MyCalss a;

    cout << a[4] << endl;
    a[4] = 5;
    cout << a[4] << endl;
    
}