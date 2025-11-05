#include "Person.h"
#include <sstream>

// 构造函数的实现
Person::Person(std::string name, int age) : name(name), age(age) {}

// setAge 方法的实现
bool Person::setAge(int newAge) {
    if (newAge > 0) {
        age = newAge;
        return true;
    }
    return false;
}

// getInfo 方法的实现
std::string Person::getInfo() const {
    std::stringstream info;
    info << "姓名: " << name << ", 年龄: " << age;
    return info.str();
}