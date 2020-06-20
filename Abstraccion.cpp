#include <iostream>

using namespace std;

class Human{

    

    public:
        int age;

        Human(int spawnAge){
        age = spawnAge;
        }

        void think(){
           cout << getThinkMessage() << endl; 
        }
    private:
        int socialLevel;
        int inteligencia;
        int luck;

        string getThinkMessage(){
            if(socialLevel + luck > 100){
                return "Estoy teniendo pensamientos felices";
            }else if(luck > inteligencia){
                return "Soy un suertudo";
            }else if(age > 18){
                return "Soy un bebe";
            }else{
                return "No pienso nada";
            }
        }

};


int main(){
    Human Bob(19);

    Bob.think();

    return 0;
}