/**
 * @file ex1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <thread>
#include <mutex>
#include <iostream>

int g_i = 0;
std::mutex g_i_mutex;  // protects g_i
    
void safe_increment()
{
    const std::lock_guard<std::mutex> lock(g_i_mutex);
    ++g_i;
    
    std::cout << "g_i: " << g_i << "; in thread #"
                << std::this_thread::get_id() << '\n';
    
    // g_i_mutex is automatically released when lock
    // goes out of scope
}
    
int main()
{
    std::cout << "g_i: " << g_i << "; in main()\n";
    
    std::thread t1(safe_increment);
    std::thread t2(safe_increment);
    
    t1.join();
    t2.join();
    
    std::cout << "g_i: " << g_i << "; in main()\n";
}