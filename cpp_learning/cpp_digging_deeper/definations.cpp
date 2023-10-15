/*definations

1. preproccesor directives :

  directives : they direct the compiler to do some work

  preproccesors are directives, which tells the compiler to preproccess some code before the actual compilation starts
  the directives begins with the #
  the actual code is compiled by the compiler only

  ex:

  #include : it tells the compiler to include the header file in the source code
    #include <iostream> - tells the compiler to preproccess the code in the iostream header file so that we can use cin and cout etc

  #define : this directive tells the compiler to add symbolic constants and these symbolic constants are called as macros
    all the occurences of the macros in the source code will be replaced by its replacement text before the actual compilation starts
    note that : macros are not values its the replacement text

    #define PI 3.14

    int main () {
      float r, area;
      area = PI*r*r;

      return 0;
    }

  both the identifiers and variables are the names alloted by the user to a particular entity in a program

  the identifiers are just the names but the variables are the names with the the memory location associated with it

  float calculateMarks (int m, int p, int c) {
    float average = (m+p+c)/3;
    return average;
  }

  identifiers : calculate marks , m, p, c, average
  variables : m, p, c, average

  keywords are special words reserved in a particular language and they have special meaning for the compiler
  you cannot use these keywords as the as the identifiers
  like : for int float if ... etc

  main() function :
    every cpp program starts with main function
    there is exactly one main in a cpp program
    return 0 denotes the successful execution of the program

    int main() - int is used to denote the return type
    {
      //code goes here

      return 0;
    }

    main is not a keyword in cpp
    main is not predefined it is predeclared
    in cpp, our code is linked to a small runtime library which constitutes the true starting point of the program
    main is hardcoded inside this library
    our code runs when we write something inside main, which is called as function defintion

    two types of main fuctions :
      1. int main() {
        //logic

        return 0;
      }

      2. int main(int argc, char *argv[]) {
        //logic
        //this one is used to create command line applications

        return 0;
      }

  namespaces : these are used to reduce naming conflicts between libraries
    std is used for c++ standard namespace
    writing std::cout will tell the compiler to use the cout from standard c++ namespace

    ways of using namespace :
    1. using namespace std; - this uses all the names in that namespace
    2. std::cout
    3. using std::cout, std::cin;

    c++ compiler ignores whitespaces ()
  */