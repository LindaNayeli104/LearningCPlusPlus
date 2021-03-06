#include <iostream>

using namespace std;

void drawMap(int heroPosX, int heroPosY, char gameMap[5][5]){
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){   
            if(i != heroPosY){                              //filas
                cout << gameMap[i][j];
            }else{
                if(j != heroPosX){                            //columnas
                    cout << gameMap[i][j];
                }else{
                    cout << 'H';
                }
            }
        }
        cout << endl;  
    }
}

int main(){
    
    int heroPosX = 1;
    int heroPosY = 0;
    bool isGameOver = false;
    char input = ' ';

    char gameMap[5][5] = 
    {
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'}
    };

    drawMap(heroPosX, heroPosY, gameMap);

    while(isGameOver == false){
        cin >> input;
        
        if(input == 'd'){
            heroPosX++;
        }else if(input == 'a'){
            heroPosX--;
        }else if(input == 'w'){
            heroPosY--;
        }else if(input == 'z'){
            heroPosY++;
             
        }else if(input == 'p'){
            isGameOver = true;
        }

        drawMap(heroPosX, heroPosY, gameMap);
    }

    return 0;
}