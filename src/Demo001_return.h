#include <string>

namespace Demo001_return
{

class Person{
public:
    Person(){
        printf("=== Person Constructor Function ===\n");
    }
    ~Person(){
        printf("=== Person Destructor Function ===\n");
    }

    Person(const Person& other_){
        printf("=== Person Copy Constructor Function ===\n");
        this->_name = other_._name;
    }

    // 移动构造函数
    Person(Person&& other_){
        printf("=== Person Move Constructor Function ===\n");
        this->_name = other_._name;
    }

    Person& operator=(const Person& other_){
        printf("=== Person Assignment Function ===\n");
        if(this == &other_){
            return *this;
        }

        this->_name = other_._name;

        return *this;
    }

    void setName(const std::string& name_){
        this->_name = name_;
    }

private:
    std::string _name;
    
};

void start();

} // namespace Demo001_return
