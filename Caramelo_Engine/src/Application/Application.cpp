#include "Application.h"

#include <iostream>

Application::Application()
{
}

Application::~Application()
{
}

void Application::run()
{
    while(true)
    {
        std::cout << "Application Running!!" << std::endl;
    }
}
