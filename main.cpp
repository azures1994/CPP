#include <stdio.h>

#include "Demo000_Base.h"
#include "Demo001_return.h"
#include "Demo002_TypeConversion.h"
#include "Demo003_Polymorphism.h"
#include "Demo004_ByteAlignment.h"

void test_Byte_Order()
{
    // int a = 0x12345678;
    // char* p = (char*)&a;
    // printf("a = %x, p[0] = %x, p[1] = %x, p[2] = %x, p[3] = %x\n", a, p[0], p[1], p[2], p[3]);

    int32_t integer = 0x12345678;
    uint8_t* bytes = reinterpret_cast<uint8_t*>(&integer);
    if(bytes[0] == 0x78){
        printf("Little Endian\n");
    }else if(bytes[0] == 0x12){
        printf("Big Endian\n");
    }
}

int main(int, char**){
    printf("Hello, from CPP!\n");

    // Demo000_Base::start();
    // Demo001_return::start();
    // Demo002_TypeConversion::start();
    // Demo003_Polymorphism::start();
    // Demo004_ByteAlignment::start();

    test_Byte_Order();

    return 0;
}
