//
// Created by SOT on 3/14/2024.
//

#ifndef BARABARA_OSZTALYOK_H
#define BARABARA_OSZTALYOK_H
#include "SDL.h"
#include "init.h"
#include "vector"
#include "alakzatok.h"


class Ball:public Alakzatok{
    int dx, dy;
public:
    Ball();
    void bounce();
    void update();
};
class Kocka:public Alakzatok{
public:
    Kocka(int x, int y): Alakzatok(x, y){};
};
std::vector<Kocka> generalas();

#endif //BARABARA_OSZTALYOK_H
