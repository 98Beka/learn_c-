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
        void SetX(int valueX)
        {
            x = valueX;
        }
        void SetY(int valueY)
        {
            y = valueY;
        }
        void Print()
        {
            cout << "x = " << x << "\ty = "<< y << endl;
        }
        bool operator==(const Point &other)
        {
            return this->x == other.x && this->y == other.y;
        }
        bool operator!=(const Point &other)
        {
            return !(this->x == other.x && this->y == other.y);
        }
};

int main()
{
    Point a(10, 5);
    Point b(10, 3);
    Point c(10, 3);
    
    bool bl = a == b;
    cout << "a == b\t" << bl << endl;
    bl = b == c;
    cout << "b == c\t" << bl << endl;
    bl = b != c;
    cout << "b != c\t" << bl << endl;
}