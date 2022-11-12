/**
 * @file ex2.cpp
 * @author colson (dud3722000@naver.com)
 * @brief Narrow conversion
 * @version 0.1
 * @date 2022-01-22
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

void func(int i)
{ /* ... */
}

int main(int argc, char *argv[])
{
    int x = 1.2345;
    func(1.1234);

    // Error
    // int x1 = {1.2345};
    // func({1.1234});
    return 0;
}