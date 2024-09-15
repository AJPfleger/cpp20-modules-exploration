module;

#include <iostream>
import libA;

export module libB;

export void functionB() { 
    functionA();
    std::cout << "Function B from libB" << std::endl;
}

