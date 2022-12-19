/**
 * @file ex2.cpp
 * @author colson (dud3722000@naver.com)
 * @brief std::oct, std::dec, std::oct
 * @version 0.1
 * @date 2022-01-31
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <sstream>

int main(int argc, char *argv[])
{

    std::cout << std::hex << 10 << std::endl;
    std::cout << std::dec << 0x0C << std::endl;
    std::cout << std::oct << 9 << std::endl;

    /* 스트림 진법 형식이 바뀌어지면 계속 유지된다. */
    std::cout << std::hex << 10 << ", " << std::dec << 13 << std::endl;

    int in;
    /* 2A를 hex 로 읽어들이자 */
    std::istringstream("2A") >> std::hex >> in;
    std::cout << std::dec << in << ", " << std::hex << in << ", " << std::oct << in << std::endl;

    return 0;
}
