#include <iostream>
using namespace std;

//polimorfizm
// переопределение методов дочерних классов при помощи virtual
class Gun
{
    public:
        virtual void shoot()
        {
        cout << "BANG!" << endl;
        }
};

class SubmachineGun : public Gun
{
    public:
    void shoot() override
    {
        cout << "BANG! BANG! BANG!" << endl;
    }
};

class Bazooka : public Gun
{
    public:
        void shoot() override
        {
            cout << "BADABUM!" << endl;
        }
};

class Player
{
    public:
    void Shoot(Gun *gun)
    {
        gun->shoot();
    }
};

int main()
{
    Gun gun;
    SubmachineGun mgun;
    Bazooka bzk;

    Player player;
    player.Shoot(&gun);
    player.Shoot(&mgun);
    player.Shoot(&bzk);
}