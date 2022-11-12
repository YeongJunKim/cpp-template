/**
 * @file PacketHandler.h
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __PACKETHANDLER__
#define __PACKETHANDLER__

#include <iostream>
#include <vector>

class PacketHandler
{
  public:
    PacketHandler(uint16_t protocolVersion) : _protocolVersion(protocolVersion)
    {
    }
    ~PacketHandler() = default;

  public:
    uint16_t getVersion();
    std::vector<uint8_t> makeResetPacket();
    std::vector<uint8_t> makeSetTargetPacket();
    std::vector<uint8_t> makeGetTargetPacket();

  private:
    uint16_t _protocolVersion;
};

#endif /* __PACKETHANDLER__ */
