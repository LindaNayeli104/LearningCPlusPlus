#include <iostream>

using namespace std;

int main()
{
    bool isHappy = true;
    char input = ' ';

    do{
        cout << ":D" << endl;
        cout << "Sigues feliz?? (T/F)" << endl;

        cin >> input;

        if(input == 'F'){
            isHappy = false;
            cout << ":(";
        }
    }while(isHappy);

    return 0;
}