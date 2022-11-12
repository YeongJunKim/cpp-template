/**
 * @file ex1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-01-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 
#include <atomic>
#include <memory>
#include <type_traits>
#include <iostream>

class Foo { private: int mArray[123]; };
class Bar { private: int mInt; };

int main(int argc, char *argv[])
{
    std::atomic<Foo> f{};
    // std::cout << std::is_trivially_copyable<Foo>() << " " << f.is_lock_free() << std::endl;
    std::atomic<Bar> b{};
    std::cout << std::is_trivially_copyable<Bar>() << " " << b.is_lock_free() << std::endl;
    return 0;
}