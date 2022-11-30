/* bit manipulation operators: these operators operatex on the binary representation of the operand.

operators:
1. binary And - &
2. binary OR - |
3. binary XOR - ^
4. binary one's compliment - ~
5. binary left shift - <<
6. binary right shift - >>

1.Binary And (&):
	rules:
    1. 0 & 0 = 0
    2. 0 & 1 = 0
    3. 1 & 0 = 0
    4. 1 & 1 = 1
	
    example:
    5 & 7

    5 = 0000101
    7 = 0000111
    -----------
        0000101 = 5

2. Binary OR (|):
	rules:
    1. 0 | 0 = 0
    2. 0 | 1 = 1
    3. 1 | 0 = 1
    4. 1 | 1 = 1 

    example:
    5 | 8
    
    5 = 0000101
    8 = 0001000
    -----------
        0001101 = 13

3. Binary XOR (^):
(also called as exclusive OR)
	rules:
    1. 0 ^ 0 = 0
    2. 1 ^ 0 = 1
    3. 0 ^ 1 = 1
    4. 1 ^ 1 = 0

    example:
    5 ^ 7

    5 = 0000101
    7 = 0000111
    -----------
    	0000010 = 2

4.Binary one's compliment (~):
(also callled as Binary Not)
	rules:
    1. ~0 = 1
    2. ~1 = 0

    example:
    1. ~5 = ~(0000101)
			1111010 = (-6)
    
    2. ~0 (where 0 is a integer) = (-1)

5.Binary Left Shift (<<):

	a << b = (a)*(2^b) (2 ki power b)

	like:
	5 << 2 

    5 = 0000101 <- (00)
    	(two zeros in starting will drop)
      = 0010100
      = ((2^4) + (2^2))
      = (2^2)(5) = 20

5. Binary Right Shift (>>)
	
    a >> b = a/(2^b) (integer division)

 	like:
    10 >> 2

    10 = 00 -> 0001010 
    	 (two digits fall from right)
       = 0000010 = 2 
*/

#include <iostream>
using namespace std;

int main() {
    int a{5};
    int b{7};
    int c{8};
    int d{10};

    
    cout << (a&b) << endl;
    cout << (a|b) << endl;
    cout << (a^b) << endl;
    cout << (~a) << endl;
    cout << (~0) << endl;
    cout << (a<<2) << endl;
    cout << (d>>2) << endl;
    
    return 0;
}


