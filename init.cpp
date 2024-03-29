//
// Created by SOT on 3/14/2024.
//

#include "init.h"
#include "SDL.h"
#include "osztalyok.h"
#include "vector"
#include "jatekos.h"
#include "alakzatok.h"
#include "grid.h"

void Jatek::indit() {
    bool quit = false;
    SDL_Event event;
    SDL_Init(SDL_INIT_EVERYTHING);
    Ball ball;
    Dir dir = non;
    Jatekos jatekos;
    grid grid;
    grid.generalas();

    while(!quit) {
        SDL_PollEvent(&event);
        switch (event.type) {
            case SDL_QUIT:
                quit = true;
                break;
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym) {
                    case SDLK_LEFT:
                        dir = bal;
                        break;
                    case SDLK_RIGHT:
                        dir = jobb;
                        break;
                    default:
                        dir = non;
                        break;
                }
        }
        SDL_SetRenderDrawColor(renderer,0,0,0,255);
        SDL_RenderClear(renderer);

        for (int i = 0; i < 16; ++i) {
            for (int j = 0; j < 32; ++j) {
                std::vector<Kocka> asd = grid.cella_kockak(i,j);
                for (const Kocka& kocka : asd) {
                    kocka.rajzol(renderer);
                }
            }
        }

        ball.update();
        SDL_Rect A = ball.rajzol(renderer);

        jatekos.update(&dir);
        SDL_Rect B = jatekos.rajzol(renderer);

        if(SDL_HasIntersection(&A, &B) == SDL_TRUE){
            ball.bounce();
        }

        SDL_RenderPresent(renderer);
        SDL_Delay(20);
    }

}

void Jatek::bezar() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
Jatek::Jatek(){
    window = SDL_CreateWindow("Jatek", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 640, 0);
    renderer = SDL_CreateRenderer(window, -1, 0);
}

