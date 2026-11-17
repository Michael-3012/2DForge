#include "Application.h"

TwoDForge::Application::Application()
    : window("2DForge", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_OPENGL)

{
}

void TwoDForge::Application::run() 
{
    bool engineRunning = true;
        while (engineRunning) 
        {
            input.eventPoller();
            if (input.checkStatus() == false) {
                engineRunning = false;
            }
            window.swapBuffer();
        }
}

TwoDForge::Application::~Application() 
{    
}
