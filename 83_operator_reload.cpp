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

    void Print()
    {
        cout << ">>>>>";
        for (int i = 0; i < this->size; i++)
            cout << this->data[i];
        cout << "<<<<<";
        cout << endl;
    }

    MyClass &operator = (const MyClass &other) //reload operator = assignment
    {
        cout << "operator\t\"=\"\t" << this << endl;
        if (this->data != nullptr)
            delete [] this->data;
        this->data = new int[other.size];
        for (int i = 0; i  < other.size; i++)
            this->data[i] = other.data[i];
        return *this;
    }

    ~MyClass()
    {
        delete[] this->data;
        cout << "destructor\t" << this << endl;
    };
    

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
    MyClass b(10);
    MyClass c(10);
    MyClass d(10);

   c = a = b;
   d.operator=(a); // the same as d = a;

}