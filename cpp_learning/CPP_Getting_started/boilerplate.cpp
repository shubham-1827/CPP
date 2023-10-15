// this is the cpp boiler plate you have to use this format in every cpp program
// #include is the preproccesor directive and iostream is the header file
// std is the namespace
#include <iostream>
using namespace std;

int main()                 // main function denotes the start of the cpp program
{                          // curly braces are used to specify functions starting and ending points
  cout << "Hello World!!"; // cout is the function used to print in cpp

  return 0; // return 0 denotes the successful execution of the program
}

// first step is compilation and other then we run the executable file
// .cpp file -----> compiler -----> .exe file[on windows] or .out file[mac]
// now we can run this .exe executable file
// compiling or building --> g++ hello.cpp -o hello
// running the executable --> .\hello