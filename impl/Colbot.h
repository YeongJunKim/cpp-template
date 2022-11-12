/**
 * @file ColBot.h
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-02-26
 * @ref https://grayt.tistory.com/66
 * @ref https://ozt88.tistory.com/32
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __COLBOT__
#define __COLBOT__

#include <iostream>
#include <memory>

/* Forward declaration */
class PacketHandler;
class SerialHandler;

class Colbot
{
  public:
    Colbot(PacketHandler &packetHandler, SerialHandler &serialHandler);
    ~Colbot() = default;

  public:
    uint16_t getProtocolVersion();
    bool reset();

  private:
    std::unique_ptr<PacketHandler> packetHandlerImpl;
    std::unique_ptr<SerialHandler> serialHandlerImpl;

  private:
    struct ColbotData;
    /* https://ozt88.tistory.com/32 : unique_ptr을 사용하면 에러가 남 */
    std::shared_ptr<ColbotData> _colbotDataImpl;
};

#endif /* __COLBOT__ */
