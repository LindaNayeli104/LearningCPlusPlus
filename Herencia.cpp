#include <iostream>

using namespace std;

class Mage{

    private:
        
    
    public:
        int mana, hp, power;

        Mage(int iMana, int iHp, int iPower){
            mana = iMana;
            hp = iHp;
            power = iPower;
        }

        void spell(){
            cout << "Fireworks!!:  " << power << endl;
        }

};

class IceMage : public Mage{

    public:

        IceMage(int iMana, int iHp, int iPower) : Mage(iMana, iHp, iPower){
            mana = iMana;
            hp = iHp;
            power = iPower + 10;
        }

};

int main(){

    Mage Gandalf(100, 10, 20);
    Gandalf.spell();

    IceMage Sauruman(100, 10, 20);
    Sauruman.spell();

    return 0;
}
