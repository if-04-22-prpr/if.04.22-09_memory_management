/**
* @mainpage
* @section intro Introduction
*
* The implementation of a simple memory management system.
* 
* @section objective Assignment Objective
*
* Implementation of a memory management system as a replacement for malloc and free.
*
* @section assignment Assignment
*
* Technical details regarding the implementation of the memory manager are stated in
* file `mem_man.c`.
*
* - Implement all functions declared in `mem_man.h`.
* - Implement unit tests, at least those that are declared in `test_mem_man.h`
* - Add additional unit tests as needed.
*
* @section instructions Working Instructions
*
* -# Implement all missing but required functions of all files mentioned below empty to make the
*    application compilable and runnable. Most unit tests will be red.
*   - **--COMMIT--**
*
* -# 'test_mem_man.c': Implement all declared unit tests. Run those tests, they shall be red, because non of 
*     the tested functions is implemented yet.
*   - **--COMMIT--**
*
* -# 'mem_man.c': Implement all functions defined by this file.
*   - Obey comments in header files and source code. 
*   - Run the unit tests frequently and fix failures.
*   - Make all unit tests green.
*   - **--COMMIT--**

* -# 'test_mem_man.c': Extend the unit tests with additional test cases.
*   - **--COMMIT--**
*
* -# 'mem_man_app.c': Implement the main application according to the requirements state in the source file
*     of the application.
*   - **--COMMIT--**
*
* -# Run the application. 
* 
*
* @section notes Notes
* -# `general.h` contains macros for finding the minimum, maximum, and absolute value 
* -# make cleantest: This new make target for clearing the console, building, and running unit test is available.
* -# Sometimes changes are not properly detected by incremental builds. If something very strange 
*    happens during compilation, try to run `make clean` followed by `make` to start a clean build.
*    This approach is also recommended after everthing is done, because some compiler warning appears
*    only in clean builds. 
*/