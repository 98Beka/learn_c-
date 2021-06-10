#include <iostream>
using namespace std;

class Apple
{
public:
    static int count;
    Apple()
    {
        this->count++;
        this->color = "";
    }
private:
    string color;
};

int Apple::count = 0;

int main()
{
    cout << Apple::count << endl;
    Apple a1;

    cout << Apple::count << endl;
    Apple a2;
    
    cout << Apple::count << endl;
    Apple a3;

    cout << Apple::count << endl;
}