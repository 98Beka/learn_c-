#include <iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout << "default constructor of class A" << endl;
    }
    A(string str)
    {
        cout << str << endl;
    }
};

class B : public A
{
    public:
    B() : A("second constructor") // there we choose one of perent class'(A) contsructors
    {
        cout << "default constructor of class B" << endl;
    }
};

int main()
{

}