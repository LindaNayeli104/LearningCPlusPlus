#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCell.h"

class GameMap
{
    public:
        GameMap();

        MapCell* playerCell;
        MapCell cells[15][10];

        void draw();

        //Esta funcion obtiene las coordenadas de player y actualiza el mapa
        bool setPlayerCell(int playerX, int playerY);

        


    protected:
       
         void loadMapFromFile();

    private:

};

#endif // GAMEMAP_H