#include <SDL2/SDL.h>
#include <iostream>
#include "Core/Application.h"

int main(int, char*[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << SDL_GetError() << '\n';
        return 1;
    }

    try
    {
        TwoDForge::Application myApp;
        myApp.run();
        
    }
    catch(const std::runtime_error& e)
    {
        std::cerr << e.what() << '\n';
        SDL_Quit();
        return 1;
    }
    
    SDL_Quit();
    return 0;
}