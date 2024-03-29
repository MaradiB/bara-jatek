//
// Created by SOT on 3/29/2024.
//

#ifndef BARABARA_GRID_H
#define BARABARA_GRID_H
#include "vector"
#include "osztalyok.h"
class grid {
    int height;
    int width;
    int cellSize;
    std::vector<std::vector<std::vector<Kocka>>> kockak;
public:
    grid();
    void kocka_berak(Kocka& kocka);
    std::vector<Kocka> cella_kockak(int sor, int oszlop);
    void generalas();
};


#endif //BARABARA_GRID_H
