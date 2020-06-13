#include <iostream>

using namespace std;

void printCuteMessage()
{   
    cout << "Eres increible!" << endl;
    cout << "Hoy es un gean dia!" << endl;
    cout << "Disfrutalo!" << endl;
}

bool isPlayerDead(int hp)
{   
    if(hp <=0){
        return true;
    }else{
        return false;
    }
}

int main()
{
    printCuteMessage();
    int totalLife = 3;
    cout << isPlayerDead(totalLife);
}