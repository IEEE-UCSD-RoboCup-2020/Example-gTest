cmake_minimum_required(VERSION 3.10)

set(This HelloWorld)

set(Sources
    HelloWorld.cpp
)

add_library(${This} STATIC ${Sources})
