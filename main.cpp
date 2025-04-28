#include <stdio.h>

#include "Demo000_Base.h"
#include "Demo001_return.h"
#include "Demo002_TypeConversion.h"

int main(int, char**){
    printf("Hello, from CPP!\n");

    // Demo000_Base::start();
    // Demo001_return::start();
    Demo002_TypeConversion::start();

    return 0;
}
