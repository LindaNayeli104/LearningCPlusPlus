#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /*ofstream myFile("GameData.txt");
    string playerName = "";

    if(myFile.is_open()){
        myFile << "Hola Linda!" << endl;
        myFile << "mi nombre es: " << endl;

        cout << "Introduce el nombre de tu heroe:" << endl;
        cin >> playerName;
        myFile << playerName;

       
    }
    myFile.close();
*/
    ifstream myFileRead("GameData.txt");
    string line;
    string nombreHeroe = "";
    int renglon = 0;

    if(myFileRead.is_open()){
           while (getline(myFileRead, line))
           {
 
               if(renglon == 2){
                   nombreHeroe = line;
               }

               renglon++;
           }
           
    }else{
        cout << "No logre abrir mi archivo, checar el antivirus!!" << endl;
    }

    cout << "Bienvenida a tu aventura: " << endl;
    cout << nombreHeroe << endl;
    return 0;
}

