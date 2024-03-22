#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    bool alive;

    Hero(int health){
        this->health  = health;
    }
};

int main()
{
    Hero Myhero(100);
    // Myhero.health=100;
    // Hero();
    cout<<Myhero.health<<endl;
    return 0;
}