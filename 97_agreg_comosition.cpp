#include <iostream>
using namespace std;

class Image
{
public:
    void GetImageInfo()
    {
        for (int i = 0; i < LENGTH; i++)
            cout << pixels[i].GetInfo() << endl;
    }
private:
    class Pixel
    {
        public:
        Pixel(int r, int g, int b)
        {
            this->r = r;
            this->g = g;
            this->b = b;
        }
        string GetInfo()
        {
            return "Pixel: r-" + to_string(r) + " g-" + to_string(g) +"b-" + to_string(b);
        }
        private:
            int r;
            int g;
            int b;

    };
    static const int LENGTH = 5;
    Pixel pixels[5]
    {
        Pixel(0, 4, 64),
        Pixel(4, 41, 10),
        Pixel(111, 4, 24),
        Pixel(224, 224, 14),
        Pixel(111, 179, 64),
    };
};

class Human
{
    public:
        void Think()
        {
            brain.Think();//делегирование - вызов такой же функции у внутреннего класса. Основа лежит во внутреннум классе.
        }
    private:
        class Brain
        {
        public:
            void Think()
            {
                cout << "i think" << endl;
            }
        };
    Brain brain; //композиция - жесткоя привязка одного объекта к другому(мозга к человеку)
    Cap cap; // агрегация - не жксткая привязка(кепка)
};

class Cap
{
    public:
        string GetColor()
        {
            return color;
        }
    private:
        string color = "red";
};

int main()
{
    Human human;
    human.Think();
}