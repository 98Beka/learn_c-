#include <iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout << "alocate dinomic memory for class A" << endl;
    }
    virtual ~A() = 0;
};

A::~A(){};

class B: public A
{
    public:
    B()
    {
        cout << "alocate dinomic memory for class B" << endl;
    }
    ~B() override
    {
        cout << "freed dinomic memory for class B" << endl;
    }

};

int main()
{
    A *p = new B;

    delete p;

}