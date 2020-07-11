# Step by step instruction to utilize Google Test (gTest) in your project:

Assuming you already installed CMake and know the basics of it:
1. Install the gTest lib: On linux Terminal use the command "sudo apt-get install libgtest-dev"
2. Add gTest into your project root as a submodule. gTest's repo can be found [HERE](https://github.com/google/googletest.git)!
   
   The full command should be:
      "git submodule add https://github.com/google/googletest.git googletest"
 
3. Create .cpp files for the tests and link your source code as libraries in CMake.

4. Create executable for your tests. Or if you are using VSCode, Shift + Ctrl + P and type "CMake: run tests".
