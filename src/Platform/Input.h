#pragma once
#include <SDL2/SDL.h>

namespace TwoDForge 
{
    class Input
    {
        public:
            Input();

            void eventPoller();

            bool checkStatus();

            ~Input();
        private:
            bool applicationRunning = true;
    };
}