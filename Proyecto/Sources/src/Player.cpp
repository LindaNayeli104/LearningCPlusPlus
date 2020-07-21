#include "../../Headers/include/Player.h"
#include <iostream>

using namespace std;

Player::Player(){
    x = 1;
    y = 1;
}

void Player::callInput()
{
    char userInput = ' ';

    cin >> userInput;

    switch(userInput)
    {
        case 'w':
            y += 1;
            cout << "El jugador se mueve arriba" << endl;
            break;

        case 's':
            y -= 1;
            cout << "El jugador se mueve abajo" << endl;
            break;

        case 'd':
            x += 1;
            cout << "El jugador se mueve derecha" << endl;
            break;

        case 'a':
            x -= 1;
            cout << "El jugador se mueve izquierda" << endl;
            break; 
    }
    cout << "Mi jugador esta en las coordenadas: " << x << ", " << y << endl;
}
