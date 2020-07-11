#include <iostream>
#include <gtest/gtest.h>
#include "../src/HelloWorld.cpp"
#include <string.h>

TEST(HelloWorld_Test, GTestMacros)
{
    HelloWorld greeter;
    std::string actual = greeter.sayHello();
    EXPECT_EQ(actual, actual);
    EXPECT_EQ(1,1);
}
