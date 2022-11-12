/**
 * @file main.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-01-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <chrono>
#include <functional>
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

std::mutex mtx;

void function(void)
{
    mtx.lock();
    //Do something...
    mtx.unlock();
}

int main(int argc, char *argv[])
{
    std::function<void(int, int &)> fnc = [&](int id, int &value) {
        for (int i = 0; i < 1000; i++)
        {
            mtx.lock();
            value += 1;
            std::cout << __PRETTY_FUNCTION__ << ", Lock complete"
                      << ", id: " << id << ", value: " << value << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
            mtx.unlock();
        }
    };
    std::vector<std::thread> workers;
    int target = 0;
    workers.push_back(std::thread(fnc, 0, std::ref(target)));
    workers.push_back(std::thread(fnc, 1, std::ref(target)));

    // for (auto &thread : workers)
    //     thread.detach();
    while(1)
    {

    }
}
