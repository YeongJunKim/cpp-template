/**
 * @file main.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-01-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

#ifdef TEST1
#include "test1.h"
#endif 
#ifdef TEST2
#include "test2.h"
#endif

int main(int argc, char *argv[])
{
    std::cout << "test: " << test(-1) << std::endl;

    return 0;
}
