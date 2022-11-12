/**
 * @file ex3.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-01-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 
#include <chrono>
#include <iostream>
#include <thread>
#include <vector>

void increment(std::atomic_int &counter)
{
    for (int i = 0; i < 100; ++i)
    {
        ++counter;
        std::this_thread::sleep_for(std::chrono::microseconds(1));
    }
}

int main(int argc, char *argv[])
{
    std::atomic_int counter(0);
    std::vector<std::thread> threads;
    for (int i = 0; i < 10; ++i)
        threads.push_back(std::thread{increment, std::ref(counter)});

    for (auto &t : threads)
        t.join();

    std::cout << "Result = " << counter << std::endl;
}