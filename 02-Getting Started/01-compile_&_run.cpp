important commands:
1. cd - change directory
2. ls - look into the directory(list all files in directory.)
3. g++ - invokes the gnu c++ compiler
4. clang++ - invokes the clang compiler
5. -o file_name flag - change the name of executable according to you.

proccess of runnig a program:

step 1 - compile 
g++ hello.cpp -o hello
or,
clang++ hello.cpp -o hello

step 2 - run the executable
when files are conpiled by c++ compiler, an executable is created as .exe file - windows, and .out file - mac.

./a.out (default name)
or,
./file_name.out (if you used the -o flag)