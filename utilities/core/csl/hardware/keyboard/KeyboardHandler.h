/**
 * @file KeyEvent.h
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-11-15
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __KEYEVENT__
#define __KEYEVENT__

namespace csl
{
namespace keyboard
{
class KeyboardHandler
{
  public:
    KeyboardHandler();
    ~KeyboardHandler();

  private:
};

static KeyboardHandler *getKeyEventHandler()
{
    static KeyboardHandler *event = nullptr;
    if (!event)
    {
        event = new KeyboardHandler();
    }
    return event;
}
} // namespace keyboard
} // namespace csl

#endif /* __KEYEVENT__ */
