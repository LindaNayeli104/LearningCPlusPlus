#include <iostream>

using namespace std;

class Cat{
    public:
        string Name;

        Cat(){
            Name = "Guapo";
        }

         Cat(string iName){
            Name = iName;
        }

        void meow(){
            cout << Name << " dice meow" << endl;
        }
};

int main(){
    Cat myFirstKitty;
    Cat mySecondKitty("Toriel");

    myFirstKitty.meow();

    


    return 0;
}