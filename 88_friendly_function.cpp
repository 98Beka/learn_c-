#include <iostream>
using namespace std;

class Point
{
    private:
        int x;
        int y;
    public:
        Point(int valueX, int valueY) //constructor
        {
            x = valueX;
            y = valueY;
        }
        Point() //перегрузка конструктора
        {
            x = 0;
            y = 0;
        }
        int GetX()
        {
            return x;
        }
        int GetY()
        {
            return y;
        }
        void Print()
        {
            cout << "x = " << x << "\ty = "<< y << endl;
        }
        friend void ChangeX(Point &value);
};

void ChangeX(Point &value)
{
    value.x++;
}

int main()
{
    Point a(5, 5);
    
    a.Print();
    ChangeX(a);
    a.Print();
}