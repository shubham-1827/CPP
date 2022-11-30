Constants are expressions that cannot be changed once declared and initialised.

In c++, there are two ways of using constants:
1. #define preprocessor directive

like: #define pi 3.14
(this is just a replacement text, not a bucket of storage.)

avoid using #define for cnstant values, but you can use it
for defining any long name,
like #define ll long long
now you can use 'll' instead of long long in your program.

2. using the 'const' keyword:
(const will create a read only bucket in memory)

like: const int a = 12;
	  a=15; //ERROR-cant change value of constants

while using const keyword, initialization is must,

const b;
b=2; //this will generate an error.
