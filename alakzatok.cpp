//
// Created by SOT on 3/29/2024.
//

#include "alakzatok.h"
SDL_Rect Alakzatok::rajzol(SDL_Renderer *renderer)const {
    SDL_Rect ball = {x,y,10,10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &ball);
    return ball;
}
Alakzatok::Alakzatok(int x , int y) {
    this->x = x;
    this->y = y;
}
