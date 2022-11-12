/**
 * @file ex1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief uniform initialization
 * @version 0.1
 * @date 2022-01-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

struct CircleStruct
{
    int x, y;
    double radius;
};
class CircleClass
{
  public:
    CircleClass(int x, int y, double radius)
    : mX(x), mY(y), mRadius(radius)
    {
        
    }

  private:
    int mX, mY;
    double mRadius;
};

int main(int argc, char *argv[])
{
    // Before C++11
    CircleStruct mCircie1 = {10, 10, 2.5};
    CircleClass mCircle2(10, 10, 2.5);

    //With equal operator
    CircleStruct myCircle3 = {10, 10, 2.5};
    CircleClass myCircle4 = {10, 10, 2.5};

    //Without equal operator
    CircleStruct myCircle5{10, 10, 2.5};
    CircleClass myCircle6{10, 10, 2.5};
    return 0;
}