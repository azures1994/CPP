#include <iostream>

namespace Demo000_Base
{

int test001_lvalue_rvalve(){

    int x = 1;
    int y = 2;

    int && c = x + y;
    printf("Address of c: %p, %d\n", &c, c);
    
    c = 10;
    printf("Address of c: %p, %d\n", &c, c);

    printf("\n=================================================\n\n");

    int x1 = 1;
    int y1 = 2;
    
    const int& r1a = 8;
    const int& r1b = x1 + y1;
    printf("&r1a: %p, &r1b: %p\n", &r1a, &r1b);

    printf("\n=================================================\n\n");

    int x2 = 8;

    int&& r2a = std::move(x2);
    printf("&x2: %p, &r2a: %p\n", &x2, &r2a);
    printf("x2: %d, r2a: %d\n", x2, r2a);

    return 0;
}

void start(){
    test001_lvalue_rvalve();
}

} // namespace Demo000_Base
