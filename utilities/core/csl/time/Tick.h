/**
 * @file Tick.h
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-11-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __TICK__
#define __TICK__

#include <chrono>
#include <ctime>
#include <sstream>

namespace csl
{
namespace tick
{

static uint64_t getTick()
{
    struct timespec ts;
    clock_gettime(_CLOCK_MONOTONIC, &ts);
    return (uint64_t)(ts.tv_nsec / 1000000) + ((uint64_t)ts.tv_sec * 1000ull);
}

static void delay(uint64_t _t)
{
    volatile uint64_t nowTick = getTick();
    volatile uint64_t pastTick = nowTick;
    while (1)
    {
        nowTick = getTick();
        if (nowTick - pastTick > _t)
            break;
    }
}

struct tick_st
{
    uint64_t nowTick;
    uint64_t pastTick;

    tick_st()
    {
        update();
        reset();
    }

    /**
     * @brief call getTick() method.
     */
    void update()
    {
        nowTick = getTick();
    }

    /**
     * @brief reset tick.
     */
    void reset()
    {
        pastTick = nowTick;
    }

    /**
     * @brief Calculate the difference between nowTick and pastTick.
     *
     * @return uint64_t
     */
    uint64_t diff()
    {
        return nowTick - pastTick;
    }

    /**
     * @brief Call tick_st::update() and tick_st::diff() sequencely.
     *
     * @return uint64_t
     */
    uint64_t updateDiff()
    {
        update();
        return diff();
    }

    /**
     * @brief Generate data with std::string type.
     *
     * @return std::string
     */
    std::string toString()
    {
        std::stringstream sstr;
        sstr << "[tick]";
        sstr << " nowTick: " << nowTick;
        sstr << ", pastTick: " << pastTick;
        sstr << ", diff: " << diff();
        return sstr.str();
    }
};
} // namespace tick
} // namespace csl

#endif /* __TICK__ */
