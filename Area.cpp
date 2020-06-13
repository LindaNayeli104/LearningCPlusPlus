#include <iostream>

using namespace std;

int main()
{
    float radio = 0;
    float pi = 3.1416;

    cout << "Ingresa radio: ";
    cin >> radio;

    cout << "Area del circulo: " << pi * radio * radio << endl;
    cout << "Area de la esfera: " << 4 * pi * radio * radio << endl;

    return 0;
}