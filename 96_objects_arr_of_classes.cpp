#include <iostream>
using namespace std;


class Pixel
{
    public:
    Pixel()
    {
        this->r = 0;
        this->g = 0;
        this->b = 0;
    }
    Pixel(int r, int g, int b)
    {
        this->r = r;
        this->g = g;
        this->b = b;
    }
    string GetInfo()
    {
        return "Pixel: r-" + to_string(r) + " g-" + to_string(g) +" b-" + to_string(b);
    }
    private:
        int r;
        int g;
        int b;
};

int main()
{
    const int LENGHT = 5;

    Pixel arrS[LENGHT];
    arrS[0] = Pixel(1,1,1);
    cout << "static\t" << arrS[0].GetInfo() << endl;

    Pixel *arrD = new Pixel[LENGHT];
    arrD[0] = Pixel(1,2,3);
    cout << "dinamic\t" << arrD[0].GetInfo() << endl;
    delete [] arrD;
}