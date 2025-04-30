#include <stdio.h>

#include "Demo000_Base.h"
#include "Demo001_return.h"
#include "Demo002_TypeConversion.h"
#include "Demo003_Polymorphism.h"
#include "Demo004_ByteAlignment.h"

int main(int, char**){
    printf("Hello, from CPP!\n");

    // Demo000_Base::start();
    // Demo001_return::start();
    // Demo002_TypeConversion::start();
    Demo003_Polymorphism::start();
    // Demo004_ByteAlignment::start();

    return 0;
}
