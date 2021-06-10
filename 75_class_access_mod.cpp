#include <iostream>
using namespace std;

class Point
{
    public:
    int x;
    int y;
    void print()
    {
        cout << x << endl;
        cout << y << endl;
        printZ();
    }

    private:
    int z;
    void printZ()
    {
        cout << z << endl;
    }
};

int main()
{
    Point p;

    p.x = 100;
    p.y = 50;
    p.print();



}