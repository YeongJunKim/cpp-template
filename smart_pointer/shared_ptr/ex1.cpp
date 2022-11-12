/**
 * @file ex1.cpp
 * @author colson (dud3722000@naver.com)
 * @brief std::shared_ptr double delete
 * @version 0.1
 * @date 2022-01-30
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <memory>

class Simple {
public:
  Simple() { std::cout << "Constructor called" << std::endl; }
  ~Simple() { std::cout << "Destructor called" << std::endl; }
};

void doubleDelete() {
  Simple *mySimple = new Simple();
  std::shared_ptr<Simple> smartPtr1(mySimple);
  std::shared_ptr<Simple> smartPtr2(mySimple);
}

int main(int argc, char *argv[]) {
  doubleDelete();

  return 0;
}
