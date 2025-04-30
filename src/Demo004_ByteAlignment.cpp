#include <iostream>
#include "Demo004_ByteAlignment.h"

namespace Demo004_ByteAlignment
{

int test(){

    std::cout << "alignof(char): " << alignof(char) << std::endl;
    std::cout << "alignof(int): " << alignof(int) << std::endl;
    std::cout << "alignof(double): " << alignof(double) << std::endl;

    struct StructA{
        char c;
        int i;
        double d;
    };
    std::cout << "alignof(StructA): " << alignof(StructA) << std::endl;
    std::cout << "sizeof(StructA): " << sizeof(StructA) << std::endl;

    //!################# alignas ##################
    struct  struct_Test1
    {
        char c;
        int  i;
        double d;
    };
    
    struct alignas(8) struct_Test2
    {
        char c;
        int  i;
        double d;
    };
    
    struct alignas(16) struct_Test3
    {
        char c;
        int  i;
        double d;
    };
    
    struct alignas(32) struct_Test4
    {
        char c;
        int  i;
        double d;
    };

    std::cout<< "test1 align:" << alignof(struct_Test1) << std::endl;
    std::cout<<"test1 size:"<<sizeof(struct_Test1)<<std::endl;
    std::cout<< "test2 align:" << alignof(struct_Test2) << std::endl;
	std::cout<<"test2 size:"<<sizeof(struct_Test2)<<std::endl;
    std::cout<< "test3 align:" << alignof(struct_Test3) << std::endl;
	std::cout<<"test3 size:"<<sizeof(struct_Test3)<<std::endl;
    std::cout<< "test4 align:" << alignof(struct_Test4) << std::endl;
	std::cout<<"test4 size:"<<sizeof(struct_Test4)<<std::endl;

    struct struct_Test5 
    { 
        char m1; 
        double m4; 
        int m3; 
    };
    std::cout<<"test5 align:"<<alignof(struct_Test5)<<std::endl;
    std::cout<<"test5 size:"<<sizeof(struct_Test5)<<std::endl;

    struct alignas(4) struct_Test6
    { 
        char m1; 
        double m4; 
        int m3; 
    };
    std::cout<<"test6 align:"<<alignof(struct_Test6)<<std::endl;
    std::cout<<"test6 size:"<<sizeof(struct_Test6)<<std::endl;

    struct alignas(16) struct_Test7
    { 
        char m1; 
        double m4; 
        int m3; 
    };
    std::cout<<"test7 align:"<<alignof(struct_Test7)<<std::endl;
    std::cout<<"test7 size:"<<sizeof(struct_Test7)<<std::endl;

    //!!! #pragma pack()方式字节对齐允许更宽松的对齐方式, 与alignas只允许更严格的对齐方式不同
    #pragma pack(push)
    #pragma pack(4)
    struct struct_Test8 
    { 
    char m1; 
    double m4; 
    int m3; 
    }; 
    #pragma pack(pop)
    std::cout<<"test8 align:"<<alignof(struct_Test8)<<std::endl;
    std::cout<<"test8 size:"<<sizeof(struct_Test8)<<std::endl;


    return 0;
}

void start()
{

    test();

}
}