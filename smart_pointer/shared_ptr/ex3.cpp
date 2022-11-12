/**
 * @file ex3.cpp
 * @author colson (dud3722000@naver.com)
 * @brief aliasing
 * @version 0.1
 * @date 2022-01-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <memory>

class Simple
{
  public:
    Simple(int data) : _data(data)
    {
        std::cout << "Constructor called" << std::endl;
    }
    ~Simple()
    {
        std::cout << "Destructor called" << std::endl;
    }
    int _data;
};

void doubleDelete()
{
    Simple *mySimple = new Simple(20);
    std::shared_ptr<Simple> smartPtr1(mySimple);
    std::shared_ptr<Simple> smartPtr2(smartPtr1);
    auto aliasing = std::shared_ptr<int>(smartPtr2, &smartPtr2->_data);

    std::cout << "data: " << *aliasing << std::endl;
}

int main(int argc, char *argv[])
{
    doubleDelete();

    return 0;
}
