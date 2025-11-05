/**
 * @file person.h
 * @brief Person类的定义
 * @author 黄蕾
 * @date 05.11.2025
 */
#pragma once
#include <string>

/**
 * @brief 表示一个人的基本信息的类。
 *
 * 这个类封装了一个人的姓名和年龄，并提供了查询和修改的方法。
 */
class Person {
private:
    std::string name; ///< 人物的姓名
    int age;         ///< 人物的年龄

public:
    /**
     * @brief Person 类的构造函数。
     * @param name 初始化的姓名
     * @param age 初始化的年龄
     */
    Person(std::string name, int age);

    /**
     * @brief 设置人物的年龄。
     * @param newAge 新的年龄值
     * @return 如果年龄设置成功（年龄大于0）返回 true，否则返回 false。
     */
    bool setAge(int newAge);

    /**
     * @brief 获取人物的信息。
     * @return 包含姓名和年龄的格式化字符串。
     */
    std::string getInfo() const;
};
