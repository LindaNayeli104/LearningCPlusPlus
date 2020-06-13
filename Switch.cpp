#include <iostream>

using namespace std;

int main()
{
    int math = 0;

    cout << "Cuanto scaste en matematicas?" << endl;
    
    cin >> math;

    switch(math)
    {
        case 10:
            cout << "La alumna es una genio";
            break;  //Termina el uso del switch
        case 7:
            cout << "La alumna saco 7";
            break;
        case 0:
            cout << "La alumna reprobo";
            break;
        default:
            cout << "Valor incorrecto";
            break;
    }
}