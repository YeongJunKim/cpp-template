/**
 * @file Colbot.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Colbot.h"

#include "PacketHandler.h"
#include "Serial.h"
#include <memory>


struct Colbot::ColbotData{
    int data;
};

Colbot::Colbot(PacketHandler &packetHandler, SerialHandler &serialHandler) : _colbotDataImpl(std::make_shared<ColbotData>())
{
    packetHandlerImpl = std::make_unique<PacketHandler>(packetHandler);
}
uint16_t Colbot::getProtocolVersion()
{
    return packetHandlerImpl->getVersion();
}
bool Colbot::reset()
{
    _colbotDataImpl->data = 0;
    std::cout << "reset" << std::endl;
    auto packet = packetHandlerImpl->makeResetPacket();
    return serialHandlerImpl->write(packet);
}
