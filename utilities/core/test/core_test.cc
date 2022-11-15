/**
 * @file core_test.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-11-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <csl/core/Core.h>
#include <gtest/gtest.h>


bool get()
{
    if(csl::core::getCore() != 0)
     return true;
    
    return false;
}

TEST(CoreTest, CoreTest)
{
    // EXPECT_EQ(0, csl::core::getCore());
    EXPECT_EQ(true,get());
}

TEST(CoreTest, CoreTest2)
{
    EXPECT_EQ(true, get());
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
