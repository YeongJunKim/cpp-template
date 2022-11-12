/**
 * @file PacketHandler.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-02-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <PacketHandler.h>
#include <algorithm>

uint16_t PacketHandler::getVersion()
{
    return _protocolVersion;
}
std::vector<uint8_t> PacketHandler::makeResetPacket()
{
    std::string reset = "reset";
    std::vector<uint8_t> packet(reset.begin(), reset.end());
    return packet;
}