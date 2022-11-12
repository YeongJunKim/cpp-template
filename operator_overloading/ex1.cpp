/**
 * @file ex1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief Poor add method
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
    T getMyData() const
    {
        return _data;
    }
    MyClass add(const MyClass &object) const
    {
        return MyClass<T>(getMyData() + object.getMyData());
    }
};
int main(int argc, char *argv[])
{
    MyClass<int> first{1};
    MyClass<int> second{2};

    MyClass<int> third = first.add(second);
    return 0;
}