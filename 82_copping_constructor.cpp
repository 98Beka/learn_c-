#include <iostream>
using namespace std;

class MyClass
{
    public:
    int *data;

    MyClass(int size)
    {
        this->size = size;
        this->data = new int[this->size];
        for (int i = 0; i < this->size; i++)
            this->data[i] = random() % 10;
        cout << "constructor\t" << this << endl;
    };

    MyClass(const MyClass &other) //конструктор(метод) копирования
    {
        this->size = other.size;
        this->data = new int[other.size];
        for (int i = 0; i < other.size; i++)
            this->data[i] = other.data[i];
    };

    ~MyClass()
    {
        delete[] this->data;
        cout << "destructor\t" << this << endl;
    };
    
    void Print()
    {
        cout << ">>>>>";
        for (int i = 0; i < this->size; i++)
            cout << this->data[i];
        cout << "<<<<<";
        cout << endl;
    }

    private:
    int size;
};

void Foo(MyClass value)
{
    cout << "Foo" << endl;
    value.Print();
}

int main()
{
    MyClass a(10);

    Foo(a);
}