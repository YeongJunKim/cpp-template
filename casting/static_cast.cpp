/**
 * @file static_cast.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <csl/printer/inc/Printer.h>
#include <iostream>
#include <sstream>

class Base
{
  public:
    Base(int line)
    {
        utilties::Printer(utilties::LogLevel::DEBUG).log(__PRETTY_FUNCTION__, std::stringstream() << "Base: " << line);
    }
    virtual ~Base() = default;
};
class Derived : public Base
{
  public:
    Derived(int line) : Base(line)
    {
        utilties::Printer(utilties::LogLevel::DEBUG).log(__PRETTY_FUNCTION__, std::stringstream() << "Derived: " << line);
    }
    virtual ~Derived() = default;
};

int main(int argc, char *argv[])
{
    Base *b;
    Derived *d = new Derived(__LINE__);
    b = d;                         // 상속 계층의 상위 타입으로 업캐스팅할 필요 없다.
    d = static_cast<Derived *>(b); // 상속 계층의 하위 타입으로 다운캐스팅해야 한다.

    Base base(__LINE__);
    Derived derived(__LINE__);
    Base &br = derived;
    Derived &dr = static_cast<Derived &>(br);
    return 0;
}
