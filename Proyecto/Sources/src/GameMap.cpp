#include "../../Headers/include/GameMap.h"
#include <iostream>
#include <fstream>

using namespace std;

GameMap::GameMap(){
    playerCell = NULL;
    loadMapFromFile();
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

bool GameMap::setPlayerCell(int playerX, int playerY)
{
    if(cells[playerY][playerX].isBlocked() == false){
        if(playerCell != NULL){
            playerCell->id = 0;
        }

        playerCell = &cells[playerY][playerX];
        playerCell->id = '3';
        return true;
    }else{
        return false;
    }
    
    cout << "Las coordenadas del jugador estan en: " << playerY << "," << playerX << endl;
}

void GameMap::loadMapFromFile()
{
    /*ofstream FileCreated("Map.txt");

    if(FileCreated.is_open()){

    }else{
        cout << "FATAL ERROR: MAP FILE COULD NOT BE CREATED!" << endl;
    }*/

    string line;
    int row = 0;
    ifstream myFile("Map.txt");

    if(myFile.is_open()){

        while(getline(myFile, line)){
            for (int p=0; p < line.length(); p++){

                if(line[p] == '0'){
                    cells[row][p].id = 0;
                }else{
                    cells[row][p].id = line[p];
                }
            
            }
            
            row++;
        }

    }else{
        cout << "FATAL ERROR: MAP FILE COULD NOT BE LOADED!" << endl;
    }
}

