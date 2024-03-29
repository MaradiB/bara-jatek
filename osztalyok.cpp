//
// Created by SOT on 3/14/2024.
//

#include "osztalyok.h"
#include "SDL.h"
#include "vector"



Ball::Ball() : Alakzatok() {
    dx = -4;
    dy = 8;
}

void Ball::bounce() {

    dy = -dy;

}
void Ball::update() {
    if(x > 629 || x < 1)
        dx = -dx;
    if(y < 1 || y > 629)
        dy = -dy;
    x += dx;
    y += dy;
}
