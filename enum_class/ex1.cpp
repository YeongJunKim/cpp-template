/**
 * @file ex1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-09-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

#define SWITCHEN

class Mode
{
  public:
    enum Value : uint8_t
    {
        sleep,
        idle,
        overrun,
        error
    };

    Mode() = default;
    constexpr Mode(Value value) : _value(value) {}

#ifdef SWITCHEN // Enable switch(Mode)
    constexpr operator Value() const
    {
        return _value;
    }
    explicit operator bool() const = delete;

#else
    constexpr bool operator==(Mode mode) const
    {
        return _value == mode._value;
    }
    constexpr bool operator!=(Mode mode) const
    {
        return _value != mode._value;
    }
#endif

    constexpr bool IsError() const
    {
        return _value == Value::error;
    }

  private:
    Value _value;
};

int main(int argc, char *argv[])
{
    Mode mode = Mode::idle;

    switch (mode)
    {
    case Mode::error:
        break;
    case Mode::sleep:
        break;
    case Mode::idle:
        break;
    case Mode::overrun:
        break;
    }

    return -1;
}