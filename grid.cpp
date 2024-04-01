//
// Created by SOT on 3/29/2024.
//

#include "grid.h"

grid::grid():height(320), width(640), cellSize(20){
    int sorok = height/cellSize;
    int oszlopok = width/cellSize;

    kockak.resize(sorok);
    for (int i = 0; i < sorok; ++i) {
        kockak[i].resize(oszlopok);
    }

}
void grid::kocka_berak(Kocka &kocka) {
    int sor = kocka.gety() / cellSize;
    int oszlop = kocka.getx() / cellSize;
    kockak[sor][oszlop].assign(1,kocka);
}
std::vector<Kocka> grid::cella_kockak(int sor, int oszlop){
    return kockak[sor][oszlop];
}
void grid::generalas() {
    int x = 3;
    int y = 0;
    for (int i = 0; i < 16; ++i) {
        for (int j = 0; j < 32; ++j) {
            Kocka uj(x,y);
            kockak[i][j].assign(1,uj);
            x += 16;
        }
        x = 3;
        y += 16;
    }
}
void utkozesek(const Ball& ball){
    int sor = ball.gety() / cellSize;
    int oszlop = ball.getx() / cellSize;
    for (int i = sor - 1; i <= sor + 1; i++)
    {
        for (int i = oszlop-1; i < oszlop + 1; i++)
        {
            std::vector<Kocka> kockakCellaban = this->cella_kockak(i,j);
            for (const Kocka& kocka : kockakCellaban)
            {
                if(kocka.getx()-ball.getx() < -10 || kocka.getx()-ball.getx() < -10)
                    ball.bouncex();
                if(kocka.gety()-ball.gety() < -10 || kocka.gety()-ball.gety() < -10)
                    ball.bouncey();
            }
            
        }
        
    }
    

}
