#include <iostream>
#include <string>
using namespace std;

class A
{
    public:
        string msgOne = "Messeg one";

    private:
        string msgTwo = "Messeg twon";
    
    protected:
        string msgThree = "Messeg three";

};

class B : private A
{
    public:
    void PrintMsh()
    {
        cout << msgOne << endl;
    }
};

int main()
{
    B b;
    b.PrintMsh();

}