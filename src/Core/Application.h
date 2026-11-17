#pragma once
#include "../Platform/Window.h"
#include "../Platform/Input.h"

namespace TwoDForge 
{
    class Application
    {
    private:
        Window window;
        Input input;
    public:
        Application();

        void run();
        
        ~Application();
    };
}