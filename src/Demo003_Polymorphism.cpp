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

void start(){
    test_001();
}

} // namespace Demo003_Polymorphism