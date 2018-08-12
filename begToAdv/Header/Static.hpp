#pragma once
#include <iostream>

class Singleton {
public:
    static Singleton& Get() {
        static Singleton instance;
        return instance;
        
    }
    void Hello() {std::cout << "HELLO" << std::endl;}
};
