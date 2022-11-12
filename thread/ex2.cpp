/**
 * @file ex2.cpp
 * @author colson (dud3722000@naver.com)
 * @brief 23.2.1 함수 포인터로 스레드 만들기의 2번째 예제
 * @version 0.1
 * @date 2022-01-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <thread>

class Counter
{
  public:
    Counter(int id, int numIterations) : mId(id), mNumIterations(numIterations)
    {
    }
    void operator()() const
    {
        for (int i = 0; i < mNumIterations; ++i)
        {
            std::cout << "Counter " << mId << " has value " << i << std::endl;
        }
    }

  private:
    int mId;
    int mNumIterations;
};

int main(int argc, char *argv[])
{
    std::thread t1{Counter{1, 20}};
    Counter c(2, 12);
    std::thread t2(c);
    std::thread t3(Counter(3, 10));

    t1.join();
    t2.join();
    t3.join();

    return 1;
}
