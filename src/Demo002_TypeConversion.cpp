#include "Demo002_TypeConversion.h"

namespace Demo002_TypeConversion{

int test001(){
    float a = 3.34;
    int b = a;

    return 0;
}

int test002_static_cast(){


    Derived derived1;
    Base* pBase1 = &derived1;

    Derived* pDerived1 = static_cast<Derived*>(pBase1);

    // DerivedJia* pDerivedJia1 = static_cast<DerivedJia*>(pBase1);
    // DerivedJia* pDerivedJia2 = (DerivedJia*)pBase1;

    pBase1->base_method1();

    Base& rBase1 = static_cast<Base&>(derived1);
    rBase1.base_method1();

    //!########################################

    char c = 'a';
    int v = static_cast<int>(c);
    std::cout <<"v: " << v << std::endl;

    int large_int = 256;
    char int_as_char = static_cast<char>(large_int);
    std::cout << "int 255 -> char: " << static_cast<int>(int_as_char) << std::endl; // ������� 0 ������ֵ

    //!########################################

    enum Color { Red, Green, Blue }; // Ĭ�ϵײ������� int

    int invalid_val = 100;
    Color invalidColor = static_cast<Color>(invalid_val); // int ת��Ϊö�� (��� 100 ���� Color ����Чֵ������ǲ�ȷ���ģ����﷨������)
    // std::cout << "int 100 ת ö��: " << invalidColor << std::endl; // ����ʹ�ã�������Ϊ�쳣

    switch(invalidColor){
    case Color::Red:{
        printf("=== Red ===\n");
        break;
    }
    case Color::Green:{
        printf("=== Green ===\n");
        break;
    }
    case Color::Blue:{
        printf("=== Blue ===\n");
        break;
    }
    default:{
        printf("=== Color Error ===\n");
    }
    }

    //!########################################

    int v2 = 1000;
    void* pInt = &v2;
    float* p2 = static_cast<float*>(pInt);
    int* p3 = static_cast<int*>(pInt);
    printf("%.2f\n", *p2);
    printf("%d\n", *p3);

    return 0;
}

void start(){

    // test001();

    test002_static_cast();

}
}