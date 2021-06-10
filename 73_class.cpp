#include <iostream>
using namespace std;

//свойства который содержит какие-то характиристики называюьсся полями класса
class Human
{
    public:
    int     age; //class properties; свойсва класса; поля класса
    string  name;
    string  lustName;
};

int main()
{
    Human firstHuman; //object of class; instance of type; экземпляр типа
    firstHuman.age = 30;
    firstHuman.name = "Ivan";
    firstHuman.lustName = "Vanko";
}