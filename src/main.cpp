#include <SDL2/SDL.h>
#include <iostream>

int main(int, char*[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << SDL_GetError() << '\n';
        return 1;
    }

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);

    SDL_Window* myWindow = SDL_CreateWindow("2DForge", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_OPENGL);
    if (myWindow == nullptr) {
        std::cerr << SDL_GetError() << '\n';
        SDL_Quit();
        return 1;
    }

    SDL_GLContext myContext = SDL_GL_CreateContext(myWindow);
    if (myContext == nullptr) {
        std::cerr << SDL_GetError() << '\n';
        SDL_DestroyWindow(myWindow);
        SDL_Quit();
        return 1;
    }

    bool engineRunning = true;
    while (engineRunning) {
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            switch (event.type) {
                case SDL_QUIT: 
                    engineRunning = false;
                    break;
            }
        }

        SDL_GL_SwapWindow(myWindow);
    }

    SDL_GL_DeleteContext(myContext);
    SDL_DestroyWindow(myWindow);
    SDL_Quit();
    return 0;
}