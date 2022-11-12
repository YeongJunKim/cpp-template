/**
 * @file Interface.h
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-02-22
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __INTERFACE__
#define __INTERFACE__

template <class _implementation> class Interface
{
  public:
    Interface() {}

  private:
    _implementation implimentation;

  public:
    _implementation &getImplimentation()
    {
        return implimentation;
    }
};

#endif /* __INTERFACE__ */
