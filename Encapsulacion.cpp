#include <iostream>

using namespace std;

class Dog{

    public:
        string mBark;
        Dog(string name, string barkType){
            mName = name;
            mBark = barkType;
        }

        string getName(){
            return mName;
        }

        void setName(string newName){
            mName = newName;
        }
   
    private:
        string mName;
        
};

int main(){

    Dog perroUno("Candy", "Berk");
    perroUno.setName("Pinky");

    Dog perroDos("Pomodoro", "Woof");

    cout << perroUno.getName() << endl;
    cout << perroDos.getName() << endl;

    return 0;
}