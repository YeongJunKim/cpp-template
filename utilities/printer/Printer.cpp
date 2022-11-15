/**
 * @file Printer.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-11-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <Printer.h>

utilties::Printer::Printer(LogLevel level) : _level(level) {
  switch (level) {
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
void utilties::Printer::log(std::string where, std::stringstream stream) {
  std::cout << _prefix.str() << ", From: [" << where << "]"
            << ", Message: " << stream.str() << std::endl;
}
