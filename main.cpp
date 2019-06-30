#include "lib.h"

#include <iostream>

int main (int, char **)
{
    std::cout << "Version: " << version() << std::endl;
    std::cout << "Hello world!\n";

    return 0;
}
