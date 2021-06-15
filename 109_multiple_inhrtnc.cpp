#include <iostream>
#include <string>
using namespace std;

class Car
{
	public:
		void Drive()
		{
			cout << "i'm driving" << endl;
		}
};

class Airplain
{
	public:
		void Fly()
		{
			cout << "I'm fling" << endl;
		}
};

class FlyingCar : public Car, public Airplain
{

};

int main()
{
    FlyingCar fc;
    fc.Fly();
    fc.Drive();
}