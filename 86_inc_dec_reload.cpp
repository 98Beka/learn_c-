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
        Point & operator ++()
        {
            this->x++;
            this->y++;
            return *this;
        }
        Point & operator ++(int value)
        {
            Point temp(*this);

            this->x++;
            this->y++;
            return temp;
        }
        Point & operator --()
        {
            this->x--;
            this->y--;
            return *this;
        }
        Point & operator --(int value)
        {
            Point temp(*this);

            this->x--;
            this->y--;
            return temp;
        }
};

int main()
{
    Point a(5, 5);
    
    a++;
    a.Print();
    ++a;
    a.Print();
    cout << "---------------" << endl;
    a--;
    a.Print();
    --a;
    a.Print();
}