/**
 * @file Printer.h
 * @author colson (dud3722000@naver.com)
 * @brief Beautiful printer
 * @version 0.1
 * @date 2022-01-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __PRINTER__
#define __PRINTER__

#include <iostream>
#include <sstream>

/* FOREGROUND */
/* \033 == \x1B */
#define RST "\033[0m"
#define KRED "\033[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"

#define FRED(x) KRED x RST
#define FGRN(x) KGRN x RST
#define FYEL(x) KYEL x RST
#define FBLU(x) KBLU x RST
#define FMAG(x) KMAG x RST
#define FCYN(x) KCYN x RST
#define FWHT(x) KWHT x RST

#define BOLD(x) "\x1B[1m" x RST
#define UNDL(x) "\x1B[4m" x RST

namespace utilties
{
enum LogLevel
{
    DEBUG = 0,
    INFO = 1,
    WARN = 2,
    ERROR = 3,
    CRITIAL = 4,
};

class Printer
{
  public:
    Printer(LogLevel level) : _level(level)
    {
        switch (level)
        {
        case DEBUG:
            _prefix << "[" << FGRN("DEBUG") << "]";
            break;
        case INFO:
            _prefix << "[" << FMAG("INFO") << "]";
            break;
        case WARN:
            _prefix << "[" << FYEL("WARN") << "]";
            break;
        case ERROR:
            _prefix << "[" << FRED("ERROR") << "]";
            break;
        case CRITIAL:
            _prefix << "[" << FCYN("CRITICAL") << "]";
            break;
        }
    }

  private:
    LogLevel _level;
    std::stringstream _prefix;

  public:
    void log(std::string whrere, std::stringstream stream)
    {
        std::cout << _prefix.str() << ", From: [" << whrere << "]"
                  << ", Message " << stream.str() << std::endl;
    }
};
} // namespace utilties

#endif /* __PRINTER__ */
