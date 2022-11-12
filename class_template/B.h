/**
 * @file B.h
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-02-22
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __B__
#define __B__
#include <sstream>
#include <string>
class B
{
  public:
    B() = default;
    ~B() = default;

    std::string dump()
    {
        std::stringstream ret;
        ret << "A" << std::endl;
        return ret.str();
    }
};

#endif /* __B__ */
