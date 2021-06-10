#include <iostream>
using namespace std;

class Point
{
    private:
        int x;
    public:
        Point(int valueX) //constructor
        {
            x = valueX;
        }
        Point() //перегрузка конструктора
        {
            x = 0;
        }
        int GetX()
        {
            return x;
        }
        void SetX(int valueX)
        {
            x = valueX;
        }
        void Print()
        {
            cout << "x = " << x << endl;
        }
};

int main()
{
    Point a(10);
    a.Print();
}