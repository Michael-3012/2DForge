#include <SDL2/SDL.h>
#include <iostream>

int main(int, char*[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << SDL_GetError() << '\n';
        return 1;
    }

    SDL_Quit();
    return 0;
}