namespaces are created to reduce naming conflicts between different libraries when you are using multiple 3rd party libraries in your code.

like:
if i create a library, which has a function called 'print' that expects an integer.
and, someone else also created a library which has another function called 'print' that expects an array.

then, by using namespaces you can specify from which library the pront function belongs to.

like: example 'cout'
the declaration of 'cout' is in the std namespaces.
but,
the functionalities of cout are written in <iostream>

the namespaces can be used in three different ways:
1. using namespace std;
(includes everything in the namespace)

2. std::cout << "Hello" << std::endl;

3. using std::cout;
   using std::endl;

cout << "hello" << endl;

(if you use cout without using std namespaces you will get a compiler error.)