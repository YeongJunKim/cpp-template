/**
 * @file ex3.cpp
 * @author colson (dud3722000@naver.com)
 * @brief 전역으로 operator 함수 만들기
 * @version 0.1
 * @date 2022-02-05
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

class MyClass
{
  private:
    double _data;

  public:
    MyClass() = default;
    MyClass(double data): _data(data) {};
    double getData() const {return _data; }
    void printData() {std::cout << "data: " << _data << std::endl; }
};

MyClass operator+(const MyClass& first, const MyClass& second) {
    return MyClass(first.getData() + second.getData());
}

int main(int argc, char *argv[])
{
    MyClass first{1}, second{2};
    MyClass third = first + 3;
    third.printData();
    third = 4 + 3.0;
    third.printData();
    return 0;
}