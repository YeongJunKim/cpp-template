/**
 * @file ex3.cpp
 * @author colson (dud3722000@naver.com)
 * @brief list initialization
 * @version 0.1
 * @date 2022-01-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

 #include <iostream>

int main(int argc, char *argv[])
{
    // copy list initialization
    auto a = {11};          // C++11,C++14,C++17: initialization_list&lt;&gt;
    auto b = {1234, 434};   // C++11,C++14,C++17: initialization_list&lt;&gt;

    // direct list initialization
    auto c {11};            //  C++11,C++14: initialization_list&lt;&gt;, C++17: int
    auto d {123, 321};      //  C++11,C++14: initialization_list&lt;&gt;, C++17: Initializer for variable 'd' with type 'auto' contains multiple expressionsclang(auto_var_init_multiple_expressions)
}