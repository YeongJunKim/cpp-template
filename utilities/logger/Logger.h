/**
 * @file Logger.h
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @ref https://devbin.kr/c%EB%A1%9C-log-%EB%82%A8%EA%B8%B0%EB%8A%94-%EB%B0%A9%EB%B2%95-logger-%EB%A7%8C%EB%93%A4%EA%B8%B0/
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __LOGGER__
#define __LOGGER__

#include <cstdarg>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>

#define LOG_LEVEL_OFF 0
#define LOG_LEVEL_FATAL 10
#define LOG_LEVEL_ERROR 20
#define LOG_LEVEL_WARN 30
#define LOG_LEVEL_INFO 40
#define LOG_LEVEL_DEBUG 50
#define LOG_LEVEL_TRACE 60
#define LOG_LEVEL_ALL 100
#define __LOG_FILE__ "log.txt"
#define fatal(str, ...) writeLog(__FUNCTION__, __LINE__, LOG_LEVEL_FATAL, str, __VA_ARGS__)
#define error(str, ...) writeLog(__FUNCTION__, __LINE__, LOG_LEVEL_ERROR, str, __VA_ARGS__)
#define warn(str, ...) writeLog(__FUNCTION__, __LINE__, LOG_LEVEL_WARN, str, __VA_ARGS__)
#define info(str, ...) writeLog(__FUNCTION__, __LINE__, LOG_LEVEL_INFO, str, __VA_ARGS__)
#define debug(str, ...) writeLog(__FUNCTION__, __LINE__, LOG_LEVEL_DEBUG, str, __VA_ARGS__)
#define trace(str, ...) writeLog(__FUNCTION__, __LINE__, LOG_LEVEL_TRACE, str, __VA_ARGS__)

class Logger
{
  private:
    int _logLevel;
    bool _isOutput;
    std::string _path;
    std::string getTimestamp();

  public:
    Logger();
    Logger(int level);
    Logger(std::string_view path, int level);
    void writeLog(std::string_view funcName, int line, int level, std::string_view str, ...);
};
static Logger log;

#endif /* __LOGGER__ */
