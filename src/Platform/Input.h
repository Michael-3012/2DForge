#pragma once
#include <SDL2/SDL.h>
#include <array>

namespace TwoDForge 
{
    class Input
    {
        public:
            Input();

            void eventPoller();

            bool isPressed(SDL_Scancode key);

            bool checkStatus();

            ~Input();
        private:
            bool applicationRunning = true;
            std::array<bool, SDL_NUM_SCANCODES> keysPressed = {};
    };
}