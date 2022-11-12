/**
 * @file raw_string_literal.cpp
 * @author colson (dud3722000@naver.com)
 * @brief 로 스트링 리터럴
 * @version 0.1
 * @date 2022-08-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    auto string1 = "Hello";
    auto string2 = "Hello"s;
    auto string3 = std::string_literals::operator""s("Hello",5);
    return -1;
}