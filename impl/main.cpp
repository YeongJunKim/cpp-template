/**
 * @file main.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Colbot.h"
#include <iostream>
#include "RobotHandler.h"

#define PROTOCOL_1_0_0 100
#define PROTOCOL_1_1_2 112

int main(int argc, char *argv[])
{
    PacketHandler packetHandler = {PROTOCOL_1_0_0};
    SerialHandler serialHandler = {"/dev/ttyUSB0"};
    Colbot robot1 = {packetHandler, serialHandler};
    std::cout << "protocol version: " << robot1.getProtocolVersion() << std::endl;
    robot1.reset();

    RobotHandler<Colbot, SerialHandler> robot2 = {PROTOCOL_1_1_2, "/dev/ttyUSB0"};
    std::cout << "protocol version: " << robot2.getRobotHandler()->getProtocolVersion() << std::endl;
    robot2.getRobotHandler()->reset();
}
