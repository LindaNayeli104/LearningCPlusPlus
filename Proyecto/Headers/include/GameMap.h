#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCell.h"

class GameMap
{
    public:
        GameMap();

        MapCell* playerCell;
        MapCell cells[15][10];

        void drawIntro();
        void draw();
        void drawVictory();

        //Esta funcion obtiene las coordenadas de player y actualiza el mapa
        bool setPlayerCell(int playerX, int playerY);
        bool isGameOver = false;

        


    protected:
       
         void loadMapFromFile();

    private:

};

#endif // GAMEMAP_H