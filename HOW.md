# Step by step instruction to utilize Google Test (gTest) in your project:


## Assuming you already installed CMake and know the basics of it:
1. Add gTest into your project root as a submodule. gTest's repo can be found [HERE](https://github.com/google/googletest.git)!
   
   The full command should be:
      "git submodule add https://github.com/google/googletest.git googletest"
 
2. Create .cpp files for the tests and link your source code as libraries in CMake.

3. Create executable for your tests. Or if you are using VSCode, Shift + Ctrl + P and type "CMake: run tests".

*Note: When cloning projects that use gTest as a submodule, be sure to run "git submodule init" and "git submodule update" after cloning to set up the submodules.*


## Another way: by installing the gTest lib on your local lib
1. Install the gTest lib: On linux Terminal use the command "sudo apt-get install libgtest-dev".
   The above command will install the gTest library under your /usr directories.

2. In your project root CMakeLists.txt, be sure to run the command "find_package(GTest_REQUIRED)"

3. After running the command in 2, use ${GTEST_INCLUDE_DIRS} to invoke gTest include directories. ("include_directories(${GTEST_INCLUDE_DIRS})")

4. Use ${GTEST_LIBRARIES} to invoke gTest libraries and use "target_link_libraries(${EXECUTABLE_NAME} ${GTEST_LIBRARIES})" to link gTest libraries with target.
