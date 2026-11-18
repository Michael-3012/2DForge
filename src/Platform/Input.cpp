#include "Input.h"
#include <stdexcept>

TwoDForge::Input::Input() 
{
    if (SDL_InitSubSystem(SDL_INIT_EVENTS) < 0) 
    {
        throw std::runtime_error(SDL_GetError());
    }
}

void TwoDForge::Input::eventPoller() 
{
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        switch (event.type) 
        {
            case SDL_QUIT:
                applicationRunning = false;
                break;
            case SDL_KEYDOWN:
                TwoDForge::Input::keysPressed[event.key.keysym.scancode] = true;
                break;
            case SDL_KEYUP:
                TwoDForge::Input::keysPressed[event.key.keysym.scancode] = false;
                break;
        }
    }
}

bool TwoDForge::Input::isPressed(SDL_Scancode key) {
    return TwoDForge::Input::keysPressed[key];
}

bool TwoDForge::Input::checkStatus() 
{
    return applicationRunning;
}

TwoDForge::Input::~Input() 
{
    SDL_QuitSubSystem(SDL_INIT_EVENTS);
}

