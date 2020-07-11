#include <iostream>
#include <gtest/gtest.h>
#include "../src/HelloWorld.cpp"

TEST(HelloWorld_Test, StringObjEQ)
{
    HelloWorld greeter;
    std::string actual = greeter.sayHello();
    std::string expected = "Hello, World!";
    EXPECT_EQ(0, actual.compare("Hello, World!")) << "Expected string: \"" << expected << "\"" << std::endl << "Actual string: \"" << actual << "\"" << std::endl;
}

TEST(HelloWorld_Test, CStringEQ)
{
    char expected[] = "Hello, World!";
    char actual[] = "Hello, World!";
    EXPECT_STREQ(expected, actual);
}