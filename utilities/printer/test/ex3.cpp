/**
 * @file ex3.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-01-31
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <boost/format.hpp>
#include <iomanip>
#include <ios>
#include <iostream>

int main(int argc, char *argv[])
{
    /* Using setw, setfill */
    std::cout << "0x" << std::setw(2) << std::setfill('0') << std::hex << 10 << std::endl;
    std::cout << std::showbase << std::setw(2) << std::hex << 10 << std::endl;
    /* Using boost */
    std::cout << boost::format("0x%02x\n") % 10;
    return 0;
}