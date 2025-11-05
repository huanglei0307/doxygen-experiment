/**
 * @file calculator.h
 * @brief calculator类的定义
 * @author 黄蕾
 * @date 05.11.2025
 */
#pragma once
#include <stdexcept> // 用于包含 std::invalid_argument

/**
 * @brief 提供基本数学运算功能的静态工具类。
 */
class Calculator {
public:
    /**
     * @brief 计算两个整数的加法。
     * @param a 被加数
     * @param b 加数
     * @return 两个参数的和 (a + b)
     */
    static int add(int a, int b);

    /**
     * @brief 计算两个整数的除法。
     * @param a 被除数
     * @param b 除数
     * @return 两个参数的商 (a / b)
     * @throw std::invalid_argument 当除数 b 为 0 时抛出
     */
    static double divide(int a, int b);
};
