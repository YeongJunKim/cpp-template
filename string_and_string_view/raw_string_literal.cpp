/**
 * @file raw_string_literal.cpp
 * @author colson (dud3722000@naver.com)
 * @brief 로 스트링 리터럴
 * @version 0.1
 * @date 2022-08-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    // const char *str = "Hello " World "!"; /*!<  에러 발생*/
    const char *str1 = "Hello \"Wrold\"!";  /*!<이스케이프 시퀸스로 표한하면 됨 */
    const char *str2 = R"(Hello "World"!)"; /*!<로 스티링 */

    const char *str3 = "Line 1\nLine 2";
    const char *str4 = R"(Line 1
Line 2)"; /*!< 로 스트링은 \n 대신에 그냥 엔터를 친다 */
    std::cout << "str3: " << str3 << "\n, str4: " << str4 << std::endl;

    return -1;
}