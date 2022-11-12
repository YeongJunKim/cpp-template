/**
 * @file ex1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief Pretty std::cout
 * @version 0.1
 * @date 2022-01-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <Printer.h>
#include <sstream>

using namespace utilties;
int main(int argc, char *argv[])
{
    Printer(LogLevel::DEBUG).log(__PRETTY_FUNCTION__, std::stringstream() << "Debug message");
    Printer(LogLevel::INFO).log(__PRETTY_FUNCTION__, std::stringstream() << "Info message");
    Printer(LogLevel::WARN).log(__PRETTY_FUNCTION__, std::stringstream() << "Warn message");
    Printer(LogLevel::ERROR).log(__PRETTY_FUNCTION__, std::stringstream() << "Error message");
    Printer(LogLevel::CRITIAL).log(__PRETTY_FUNCTION__, std::stringstream() << "Critical message");

    return 0;
}