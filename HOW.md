# Step by step instruction to utilize Google Test (gTest) in your project:

1. Add gTest into your project root as a submodule. gTest's repo can be found
   [HERE](https://github.com/google/googletest.git)!
   
   The full command should be:
      "git submodule add https://github.com/google/googletest.git googletest"
 
2. Create .cpp files for the tests and include gTest and your source code as
   libraries.

3. Configure your makefile accordingly.
