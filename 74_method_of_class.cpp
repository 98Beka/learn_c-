#include <iostream>
using namespace std;

//свойства который содержит какие-то характиристики называюьсся полями класса
//функции класса называются методами класса
class Human
{
    public:
    int     age; //class properties; свойсва класса; поля класса
    string  name;
    string  lustName;
    void Print()
    {
        cout << "age:\t\t" << age << endl;
        cout << "name:\t\t" << name << endl;
        cout << "lustname:\t" << lustName << endl;
    }
};

int main()
{
    Human firstHuman; //object of class; instance of type; экземпляр типа
    firstHuman.age = 30;
    firstHuman.name = "Ivan";
    firstHuman.lustName = "Vanko";
    firstHuman.Print();
}