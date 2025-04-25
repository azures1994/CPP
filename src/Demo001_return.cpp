#include <iostream>
#include <spdlog/spdlog.h>

#include "Demo001_return.h"

namespace Demo001_return
{

Person test001(){
    Person p1; // 
    p1.setName("Tom");

    return p1; // 

}


class Rectangle {
private:
    int width;
    int height;
 
public:
    Rectangle(int w, int h) : width(w), height(h) {
        printf("===Rectangle(int w, int h)\n");
    }

    Rectangle(Rectangle&& other_){
        printf("===Rectangle Move Constructor Function\n");
    }
 
    int getWidth() const { return width; }
    int getHeight() const { return height; }
 
    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }
 
    int getArea() const { return width * height; }
};
 
// ���ض���ĸ���
Rectangle createRectangle(int w, int h) {
    Rectangle rect(w, h);
    return rect;
}
 
// ���ض��������
Rectangle& getRectangle() {
    static Rectangle rect(3, 4);
    return rect;
}
 
// ���ض����ָ��
Rectangle* createDynamicRectangle(int w, int h) {
    Rectangle* rect = new Rectangle(w, h);
    return rect;
}

int test002(){
    // ���ض���ĸ���
    Rectangle rect1 = createRectangle(5, 6);
    std::cout << "Rectangle 1: width = " << rect1.getWidth() << ", height = " << rect1.getHeight() << std::endl;
 
    // ���ض��������
    Rectangle& rect2 = getRectangle();
    std::cout << "Rectangle 2: width = " << rect2.getWidth() << ", height = " << rect2.getHeight() << std::endl;
 
    // ���ض����ָ��
    Rectangle* rect3 = createDynamicRectangle(7, 8);
    std::cout << "Rectangle 3: width = " << rect3->getWidth() << ", height = " << rect3->getHeight() << std::endl;
 
    delete rect3;  // �ͷŶ�̬����Ķ���
    return 0;
}

void start(){
    spdlog::info("=== Demo001_return ===");

    // Person p1 = test001(); // 

    // Person p2 = p1;

    // Person p3;
    // p3 = p1;

    // spdlog::info("Finish.\n");

    test002();
}

} // namespace Demo001_return
