#pragma once
#include "../Platform/Window.h"

namespace TwoDForge 
{
    class Application
    {
    private:
        Window window;
    public:
        Application();

        void run();
        
        ~Application();
    };
}