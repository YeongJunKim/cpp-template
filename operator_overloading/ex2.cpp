/**
 * @file ex2.cpp
 * @author colson (dud3722000@naver.com)
 * @brief Good operator method
 * @version 0.1
 * @date 2022-02-05
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

template <typename T> class MyClass
{
  private:
    T _data;

  public:
    MyClass(T data) : _data(data)
    {
    }
    T getData() const
    {
        return _data;
    }
    MyClass operator+(const MyClass &object) const
    {
        return MyClass(getData() + object.getData());
    }
};
int main(int argc, char *argv[])
{
    MyClass<int> first{1};
    MyClass<int> second{5};

    MyClass<int> third = first + second;
    return 0;
}