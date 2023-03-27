#include "HelloTriangleApplication.hpp"

#include <iostream>

int main()
{
    HelloTriangleApplication app;

    try
    {
        app.run();
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return 0;
}