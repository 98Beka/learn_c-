#include <iostream>
using namespace std;

//polimorfizm
// переопределение методов дочерних классов при помощи virtual


class Weapon
{
    public:
    virtual void atack() = 0;
};

class Gun : public Weapon
{
    public:
        void atack() override
        {
        cout << "BANG!" << endl;
        }
};

class SubmachineGun : public Weapon
{
    public:
    void atack() override
    {
        cout << "BANG! BANG! BANG!" << endl;
    }
};

class Bazooka : public Weapon
{
    public:
        void atack() override
        {
            cout << "BADABUM!" << endl;
        }
};

class Knife : public Weapon
{
    public:
        void atack() override
        {
            cout << "Shuuu!" << endl;
        }
};

class Player
{
    public:
    void atack(Weapon *Weapon)
    {
        Weapon->atack();
    }
};

int main()
{
    Gun gun;
    SubmachineGun mgun;
    Bazooka bzk;
    Knife knf;

    Player player;
    player.atack(&gun);
    player.atack(&mgun);
    player.atack(&bzk);
    player.atack(&knf);
}