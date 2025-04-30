#pragma once

#include <iostream>

namespace Demo003_Polymorphism {

class BaseA{
public:
    virtual void vFunc1(){
        printf("=== BaseA::vFunc1() ===\n");
    }
private:
    char _c;
    int _i;
    // double _d;
};

class DerivedA : public BaseA{
public:
    virtual void vFunc1(){
        printf("=== DerivedA::vFunc1() ===\n");
    }
};
    
void start();
} // namespace Demo003_Polymorphism