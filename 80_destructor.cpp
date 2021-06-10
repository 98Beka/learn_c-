#include <iostream>
using namespace std;

class MyClass
{
    private:
        int **arr;
        int size;
        int id;
    public:
        MyClass(int valueSize, int valueId)
        {
            size = valueSize;
            id = valueId;
            arr = new int* [size];
            for(int i = 0; i < size; i++)
            {
                arr[i] = new int[size];
                for (size_t j = 0; j < size; j++)
                    arr[i][j] = random() % 10;
                
            }
            for (size_t i = 0; i < size; i++)
            {
                for(size_t j = 0; j < size; j++)
                    cout << arr[i][j] << '\t';
                cout << endl;
            }
            cout << id << " constructor" << endl;
        }
        ~MyClass() //деструктор
        {
            for (size_t i = 0; i < size; i++)
                delete[] arr[i];
            delete[] arr;
            cout << id <<" destructor" << endl;
        }
};

void Foo()
{
    MyClass a(10, 1);
}

int main()
{
    Foo();
}