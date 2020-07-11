cmake_minimum_required(VERSION 3.10)

set(This HelloWorld_Test)

set(Sources
    HelloWorld_Test.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    HelloWorld
)

add_test(
    NAME ${This}
    COMMAND ${This}
)
