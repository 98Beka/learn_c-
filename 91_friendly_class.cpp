#include <iostream>
using namespace std;

class Point;

class Printer
{
public:
    void Print(Point &value);
};

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
    friend void ChangeX(Point &value);
    friend Printer;
};


void Printer::Print(Point &value)
{
    cout << "x = " << value.x << "\ty = "<< value.y << endl;
}  

void ChangeX(Point &value)
{
    value.x++;
}

int main()
{
    Point a(5, 5);
    Printer printer;

    printer.Print(a);

    ChangeX(a);
    printer.Print(a);
}