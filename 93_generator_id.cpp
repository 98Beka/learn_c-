#include <iostream>
using namespace std;

class Apple
{
public:
    static int count;
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
private:
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
    
}