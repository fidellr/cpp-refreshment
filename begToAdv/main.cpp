#include "Interfaces.h"
#include <iostream>
#include <string>
/* STATIC */
// #include "Static.hpp"
// Singleton::Get().Hello();

void PrintClassName(Printable* obj){
    std::cout << obj->GetClassName() << std::endl;
}

int main(){
    Entity* e = new Entity();
    
    Player* p = new Player("Fidel");
    
    PrintClassName(e);
    PrintClassName(p);
    
    
}
