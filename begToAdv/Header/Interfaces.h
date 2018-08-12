#pragma once
#include <iostream>
#include <string>

class Printable {
public:
    // pure virtual func
    virtual std::string GetClassName() = 0;
};

class Entity : public Printable {
    float X,Y;
    virtual std::string GetClassName() override {return "Entity";}
    void Move(float xa, float ya) {
        X += xa;
        Y += ya;
    }
};

class Player : public Entity {
private:
    std::string m_Name;
public:
    Player(const std::string& name) : m_Name(name) {}
    std::string GetClassName() override {return "Player";}
};
