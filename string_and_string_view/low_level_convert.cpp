/**
 * @file low_level_convert.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-08-29
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <charconv>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::string out(10, ' '), out2(10, ' ');
    auto result = std::to_chars(out.data(), out.data() + out.size(), 12345);
    if (result.ec == std::errc())
    {
        std::cout << "string: " << out << std::endl;
        std::cout << "result.ptr: " << result.ptr << std::endl;
    }
    auto [ptr, ec] = std::to_chars(out2.data(), out2.data() + out2.size(), 12345);
    if (ec == std::errc())
    {
        std::cout << "string: " << out2 << std::endl;
        std::cout << "ptr: " << ptr << std::endl;
    }
    return -1;
}
