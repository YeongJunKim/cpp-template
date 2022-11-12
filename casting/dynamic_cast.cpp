/**
 * @file dynamic_cast.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Printer.h"
#include <iostream>
#include <sstream>

class Base
{
  public:
    virtual ~Base() = default;
};
class Derived : public Base
{
  public:
    virtual ~Derived() = default;
};

int main(int argc, char *argv[])
{
    //  올바른 사용법
    Base *b;
    Derived *d = new Derived();
    b = d;
    d = dynamic_cast<Derived *>(b);
    // 레퍼런스에 대해 다음과 같이 적용하면 익셉션이 발생한다.
    Base base;
    Derived derived;
    Base &br = base;
    try
    {
        Derived &dr = dynamic_cast<Derived &>(br);
    }
    catch (const std::exception &e)
    {
        utilties::Printer(utilties::LogLevel::ERROR).log(__PRETTY_FUNCTION__, std::stringstream() << e.what());
    }
}
