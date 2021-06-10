#include <iostream>
using namespace std;

//геттер и сеттер нужен для инкапсуляции
class Point
{
    private:
        int x;
    public:
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
    Point a;

    a.SetX(10);
    a.Print();
    cout << a.GetX() << endl;
}