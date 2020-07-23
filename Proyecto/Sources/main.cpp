#include <iostream>
#include "../Headers/include/Player.h"
#include "./src/Player.cpp"
#include "../Headers/include/MapCell.h"
#include "./src/MapCell.cpp"
#include "../Headers/include/GameMap.h"
#include "./src/GameMap.cpp"
using namespace std;

int main()
{
    bool isGameOver = false;
    GameMap Map;
    Player Hero;
    cout << "Inicia el juego!!!!" << endl;

    while(isGameOver == false)
    {
        // Aqui es el loop de nuestro juego
        Hero.callInput();

        //Actualizado de informacion heroe a Mapa
        if(Map.setPlayerCell(Hero.x, Hero.y)){
            Map.draw();
        }else{
            Hero.resetToSafePosition();
            Map.draw();
        }

        //Aqui dibujamos el mapa
        
    }

    return 0;
}

