#include <iostream>
using namespace std;

class MyClass
{
    int y;
    public:
    MyClass()
    {
        this->y = 0;
    };
    MyClass(int y)
    {
        this->y = y;// ключевое слово this указывает на собственный класс
    };
    void setY(int y)
    {
        this->y = y;
    }
    int getY()
    {
        return y;
    }

};

int main()
{
    MyClass a(10);

    cout << a.getY() << endl;
    a.setY(5);
    cout << a.getY() << endl;
}