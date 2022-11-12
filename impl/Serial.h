/**
 * @file Serial.h
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __SERIAL__
#define __SERIAL__

#include <string_view>
#include <iostream>
#include <vector>

class SerialHandler
{
  public:
    SerialHandler(std::string_view dev);
    ~SerialHandler() = default;

    typedef std::vector<uint8_t> type;

  public:
    bool write(type data);
    bool isReadAvailable();
    bool read(type &data);
};

#endif /* __SERIAL__ */
