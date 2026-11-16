#pragma once
#include <SDL2/SDL.h>
#include <stdexcept>

namespace TwoDForge 
{
    class Window
    {
        public:
            Window(const char* title, int posX, int posY, int w, int h, Uint32 flags) 
            {
                SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
                SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
                SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);

                window = SDL_CreateWindow(title, posX, posY, w, h, flags);
                if (window == nullptr) 
                {
                    throw std::runtime_error(SDL_GetError());
                }

                context = SDL_GL_CreateContext(window);
                if (context == nullptr) 
                {
                    std::runtime_error error(SDL_GetError());
                    SDL_DestroyWindow(window);
                    throw error;
                }
            }

            ~Window() 
            {
                SDL_GL_DeleteContext(context);
                SDL_DestroyWindow(window);
            }
        private:
            SDL_Window* window = nullptr;
            SDL_GLContext context = nullptr;
    };
}
