//
// Created by SOT on 3/29/2024.
//

#ifndef BARABARA_JATEKOS_H
#define BARABARA_JATEKOS_H
#include "SDL.h"
#include "init.h"


class Jatekos{
    int x,y;
public:
    Jatekos();
    SDL_Rect rajzol(SDL_Renderer *renderer);
    void update(Dir *dir);

};


#endif //BARABARA_JATEKOS_H
