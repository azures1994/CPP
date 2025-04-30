#include <iostream>
#include <limits> //°üº¬ std::numeric_limits
#include <climits>
#include "Demo003_Polymorphism.h"

namespace Demo003_Polymorphism {

int test_001(){

    std::cout << "int max: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "int min: " << std::numeric_limits<int>::min() << std::endl;

    std::cout << "int max: " << INT_MAX << std::endl;
    std::cout << "int min: " << INT_MIN << std::endl;

    BaseA* pBaseA = new DerivedA;
    pBaseA->vFunc1();
    
    return 0;
}

int test_class_sizeof(){ 

    std::cout << "alignof(BaseA): " << alignof(BaseA) << std::endl;
    std::cout << "sizeof(BaseA): " << sizeof(BaseA) << std::endl;

    return 0;
}

void start(){
    test_001();

    test_class_sizeof();
}

} // namespace Demo003_Polymorphism