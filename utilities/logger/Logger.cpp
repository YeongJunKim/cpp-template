/**
 * @file Logger.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @ref https://devbin.kr/c%EB%A1%9C-log-%EB%82%A8%EA%B8%B0%EB%8A%94-%EB%B0%A9%EB%B2%95-logger-%EB%A7%8C%EB%93%A4%EA%B8%B0/
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Logger.h"
#include <boost/format.hpp>
#include <cstdio>
#include <fstream>
#include <ios>
#include <memory>

Logger::Logger()
{
    this->_logLevel = LOG_LEVEL_ERROR;
}
Logger::Logger(int level) : _logLevel(level)
{
}

Logger::Logger(std::string_view path, int level) : _path(path), _logLevel(level)
{
}

std::string Logger::getTimestamp()
{
    std::string result;
    time_t currentSec = time(NULL);
    tm *t = localtime(&currentSec);
    std::ostringstream oss;
    switch (t->tm_mon)
    {
    case (0):
        result = "Jan";
        break;
    case (1):
        result = "Feb";
        break;
    case (2):
        result = "Mar";
        break;
    case (3):
        result = "Apr";
        break;
    case (4):
        result = "May";
        break;
    case (5):
        result = "Jun";
        break;
    case (6):
        result = "Jul";
        break;
    case (7):
        result = "Aug";
        break;
    case (8):
        result = "Sep";
        break;
    case (9):
        result = "Oct";
        break;
    case (10):
        result = "Nov";
        break;
    case (11):
        result = "Dec";
        break;
    }
    oss.clear();
    oss << " " << std::setfill('0') << std::setw(2) << t->tm_mday << " " << t->tm_year + 1900;
    oss << " " << std::setfill('0') << std::setw(2) << t->tm_hour;
    oss << ":" << std::setfill('0') << std::setw(2) << t->tm_min;
    oss << ":" << std::setfill('0') << std::setw(2) << t->tm_sec << '\0';
    result = result + oss.str();
    return result;
}

void Logger::writeLog(std::string_view funcName, int line, int lv, std::string_view str, ...)
{
    FILE *fp = NULL;
    fp = std::fopen(__LOG_FILE__, "a");
    if (fp == NULL)
    {
        puts("fail to open file pointer");
        return;
    }
    std::string result;
    char level[10];
    switch (lv)
    {
    case (LOG_LEVEL_FATAL):
        strcpy(level, "[FATAL]");
        break;
    case (LOG_LEVEL_ERROR):
        strcpy(level, "[ERROR]");
        break;
    case (LOG_LEVEL_WARN):
        strcpy(level, "[WARN] ");
        break;
    case (LOG_LEVEL_INFO):
        strcpy(level, "[INFO] ");
        break;
    case (LOG_LEVEL_DEBUG):
        strcpy(level, "[DEBUG]");
        break;
    case (LOG_LEVEL_TRACE):
        strcpy(level, "[TRACE]");
        break;
    }
    result = boost::str(boost::format("%s %s [%s:%d] : %s\n") % level % getTimestamp().c_str() % funcName.data() % line % str.data());

    std::va_list args;

    va_start(args, str);
    std::vfprintf(fp, result.c_str(), args);
    va_end(args);

    va_start(args, str);
    if (_logLevel >= lv)
    {
        std::vprintf(result.c_str(), args);
    }
    va_end(args);
    if (fp != NULL)
    {
        std::fclose(fp);
    }
    return;
}