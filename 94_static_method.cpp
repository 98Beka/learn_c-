#include <iostream>
using namespace std;

class Apple
{
public:
    Apple()
    {
        this->count++;
        id = count;
        this->color = "";
    }
    int GetId()
    {
        return this->id;
    }
    int GetCount()
    {
        return count;
    }

private:
    static int count;
    string color;
    int     id;
};

int Apple::count = 0;

int main()
{

    Apple a1;
    cout <<"a3\tid\t" << a1.GetId() << endl;


    Apple a2;
    cout <<"a3\tid\t" << a2.GetId() << endl;
    

    Apple a3;
    cout <<"a3\tid\t" << a3.GetId() << endl;

    cout << "count\t" << a3.GetCount() << endl;
    
}