/**
 * @file main.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-11-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "csl/core/Core.h"
#include "csl/time/Tick.h"
#include <csl/printer/inc/Printer.h>
#include <iostream>
#include <sstream>

int main(int argc, char *argv[])
{
    utilties::Printer(utilties::LogLevel::INFO).log(__func__, std::stringstream() << "main");
    csl::core::getCore();

    while (!csl::core::getCore()->isShutdown())
    {
        static int count = 0;
        static csl::tick::tick_st tick;
        if (tick.updateDiff() > 100)
        {
            count++;
            utilties::Printer(utilties::LogLevel::INFO).log(__func__, std::stringstream() << "loop");
            tick.reset();
        }
        if(count > 10)
        {
            csl::core::getCore()->shutdown();
        }
    }

    utilties::Printer(utilties::LogLevel::INFO).log(__func__, std::stringstream() << "end");

    return -1;
}
