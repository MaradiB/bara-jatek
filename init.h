//
// Created by SOT on 3/14/2024.
//

#ifndef BARABARA_INIT_H
#define BARABARA_INIT_H
#include "SDL.h"
enum Dir{
    jobb,
    bal,
    non,
};
class Jatek{
private:
    SDL_Window *window;
    SDL_Renderer *renderer;
public:
    Jatek();

    void indit();

    void bezar();

};
#endif //BARABARA_INIT_H
