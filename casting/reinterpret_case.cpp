/**
 * @file reinterpret_case.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

class X
{
};
class Y
{
};

int main(int argc, char *argv[])
{
    X x;
    Y y;
    X *xp = &x;
    Y *yp = &y;
    //  서로 관련 없는 클래스 타입의 포인터를 변환할 때는 reinterpret_cast()를 써야 한다.
    //  static_cast()는 작동하지 않는다.
    xp = reinterpret_cast<X*>(yp);
    //  포인터를 void*로 변환할 때는 캐스팅하지 않아도 된다.
    void* p = xp;
    //  변환된 void*를 다시 원래 포인터로 복원할 때는 reinterpret_cast()를 써야 한다.
    xp = reinterpret_cast<X*>(p);
    //  서로 관련 없는 클래스 타입의 레퍼런스를 변환할 때는 reinterpret_cast()를 써야 한다.
    //  static_cast()는 작동하지 않는다.
    X& xr = x;
    Y& yr = reinterpret_cast<Y&>(x);
    return 0;
}
