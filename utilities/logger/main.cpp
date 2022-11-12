/**
 * @file main.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Logger.h"
#include <iostream>

int main(int argc, char *argv[])
{
    Logger logger(LOG_LEVEL_WARN);
    logger.fatal("hello %d", 1);
    logger.error("error %d", 2);
    logger.info("info %d", 3);
    logger.warn("warn %d", 4);
}