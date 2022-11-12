/**
 * @file RobotHandler.h
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-02-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 
#ifndef __ROBOTHANDLER__
#define __ROBOTHANDLER__

#include "PacketHandler.h"
#include "Serial.h"
#include <memory>

template <class Robot, class Dev> class RobotHandler
{
  public:
    RobotHandler(uint16_t protocolVersion, std::string_view dev) : _packetHandler(protocolVersion), _deviceHandler(dev)
    {
        _robot = std::make_shared<Robot>(_packetHandler, _deviceHandler);
    }
    ~RobotHandler() = default;

    std::shared_ptr<Robot> getRobotHandler()
    {
        return _robot;
    }

  private:
    std::shared_ptr<Robot> _robot;
    Dev _deviceHandler;
    PacketHandler _packetHandler;
};

#endif /* __ROBOTHANDLER__ */
