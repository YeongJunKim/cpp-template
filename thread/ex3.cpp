/**
 * @file ex3.cpp
 * @author colson (dud3722000@naver.com)
 * @brief 23.2.1 함수 포인터로 스레드 만들기의 3,4 번째 예제
 * @version 0.1
 * @date 2022-01-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <thread>

class Request
{
  public:
    Request(int id) : mId(id)
    {
    }
    void process()
    {
        std::cout << "Processing request " << mId << std::endl;
    }

  private:
    int mId;
};

class Publish
{
  public:
    Publish()
    {
        _th = std::thread([this] { pub(); });
        _th.join();
    }
    void pub()
    {
        for (int i = 0; i < 10; i++)
            std::cout << "Publish.." << std::endl;
    }
    std::thread _th;
};

int main(int argc, char *argv[])
{
    int id = 1;
    int numIterations = 5;
    std::thread t1([id, numIterations] {
        for (int i = 0; i < numIterations; ++i)
        {
            std::cout << "Counter " << id << " has value " << i << std::endl;
        }
    });
    t1.join();

    Request req(100);
    std::thread t2{&Request::process, &req};

    t2.join();

    Publish pub;

    return 1;
}