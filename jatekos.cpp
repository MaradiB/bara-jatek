//
// Created by SOT on 3/29/2024.
//

#include "jatekos.h"
Jatekos::Jatekos(){
    x = 290;
    y = 520;
}
SDL_Rect Jatekos::rajzol(SDL_Renderer *renderer) {
    SDL_Rect jatekos = {x,y,60,15};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &jatekos);
    return jatekos;
}
void Jatekos::update(Dir *dir) {
    if(x > 579)
        *dir = bal;
    if(x < 1)
        *dir = jobb;
    switch (*dir) {
        case jobb:
            x += 7;
            break;
        case bal:
            x -= 7;
            break;
        case non:
            break;
    }
}
