#include <iostream>

using namespace std;

class Mage{

    private:
        
    
    public:
        Mage(int basePower, int baseHp){
            power = basePower;
            hp = baseHp;
        }

        float damage(){
            return power;
        }

        void getDamage(int value){
            hp -= value;
            cout << "Mi mago le queda: " << hp << endl;
        }

        void spellGreet(){
            cout << "Hello world" << endl;
        }

        void printHp(){
            cout << hp << endl;
        }
        
    protected:
        int power, hp;

};

class IceMage : public Mage{
    public:

    IceMage(int basePower, int baseHp) : Mage(basePower, baseHp){
        power = basePower + 1;
        hp = baseHp;
    }
   

};

class FireMage : public Mage{
    public:

    FireMage(int basePower, int baseHp) : Mage(basePower, baseHp){
        power = basePower;
        hp = baseHp + 10;
    }
   

};

int main(){

    Mage* currentMage;

    FireMage Gandalf(10, 10);
    IceMage Dumbledore(10, 10);

    currentMage = &Gandalf;
    currentMage -> getDamage(1);

    currentMage = &Dumbledore;
    currentMage -> getDamage(5);

    Gandalf.printHp();
    Dumbledore.printHp();

    return 0;
}
