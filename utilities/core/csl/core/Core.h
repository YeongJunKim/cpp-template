/**
 * @file core.h
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-11-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __CORE__
#define __CORE__

#include <iostream>

namespace csl /* namespace colson library */
{
namespace core
{
class Core
{
  public:
    Core() : _isShutdown(false)
    {
    }
    bool isShutdown();
    void shutdown();

  private:
    bool _isShutdown;
};

static Core *getCore()
{
    static Core *core = nullptr;
    if (!core)
    {
        core = new Core();
    }
    return core;
}

static void shutdown()
{
    getCore()->shutdown();
}
} // namespace core
} // namespace csl

#endif /* __CORE__ */
