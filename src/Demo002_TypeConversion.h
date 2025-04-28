#pragma once 

#include <iostream>
namespace Demo002_TypeConversion{

class Base{
public:
    void base_method1(){
        printf("===Base::base_method1()\n");
    }

private:
    int base_a{0};

    
};

class Derived : public Base{
public:
    void derived_method1(){
        printf("===Derived::derived_method1()\n");
    }
    
private:
    int derived_a{0};
};

class BaseJia{
private:
    int baseJia_a{0};
};

class DerivedJia : public BaseJia{
private:
    int derivedJia_a{0};
};

void start();

}