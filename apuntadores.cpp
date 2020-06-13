#include <iostream>

using namespace std;

int main()
{
    int direccion = 3509;
    int segundaDireccion = 1337;

    int* apuntadorADir;

    apuntadorADir = &direccion;

    *apuntadorADir = 3;

    apuntadorADir = &segundaDireccion;


    cout << *apuntadorADir << endl;


    return 0;
}
