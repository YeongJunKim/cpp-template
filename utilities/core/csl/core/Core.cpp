/**
 * @file Core.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-11-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "csl/core/Core.h"

bool csl::core::Core::isShutdown()
{
    if (_isShutdown)
    {
        return true;
    }
    return false;
}

void csl::core::Core::shutdown()
{
    _isShutdown = true;
}
