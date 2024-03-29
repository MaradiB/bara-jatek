//
// Created by SOT on 3/29/2024.
//

#ifndef BARABARA_ALAKZATOK_H
#define BARABARA_ALAKZATOK_H
#include "SDL.h"


class Alakzatok {
protected:
    int x,y;
public:
    explicit Alakzatok(int x = 400,int y=300);
    [[nodiscard]] int getx()const{return x;};
    [[nodiscard]] int gety()const{return y;};
    SDL_Rect rajzol(SDL_Renderer *renderer)const;
};


#endif //BARABARA_ALAKZATOK_H
