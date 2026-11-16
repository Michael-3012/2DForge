#include <SDL2/SDL.h>
#include <iostream>
#include "Core/Application.h"

int main(int, char*[]) {
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