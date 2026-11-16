#include "Application.h"
#include <iostream>

TwoDForge::Application::Application()
    : window("2DForge", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_OPENGL)

{
}

void TwoDForge::Application::run() 
{
    bool engineRunning = true;
        while (engineRunning) {
            SDL_Event event;
            while (SDL_PollEvent(&event))
            {
                switch (event.type) 
                {
                    case SDL_QUIT: 
                        engineRunning = false;
                        break;
                }
            }

        window.swapBuffer();
    }
}

TwoDForge::Application::~Application() 
{    
}
