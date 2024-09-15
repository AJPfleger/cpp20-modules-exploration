module;

#include <iostream>

export module libA;

export void functionA() {
    std::cout << "Function A from libA" << std::endl;
}

