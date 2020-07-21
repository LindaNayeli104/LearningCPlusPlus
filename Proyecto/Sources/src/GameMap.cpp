#include "../../Headers/include/GameMap.h"
#include <iostream>

using namespace std;

GameMap::GameMap(){
    playerCell = NULL;
}


void GameMap::draw()
{
    for(int i=0; i<15; i++){
        for(int j=0; j<10; j++){
            cout << cells[i][j].id;
        } 
        cout << endl;
    }
}

void GameMap::setPlayerCell(int playerX, int playerY)
{
    if(playerCell != NULL){
        playerCell->id = 0;
    }

    playerCell = &cells[playerX][playerY];
    playerCell->id = 3;
    //cout << "Las coordenadas del jugador estan en: " << PlayerX << "," << PlayerY;
}

