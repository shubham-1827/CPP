// logical operators - and (&&), or (||), not (!)

//truth table for 'and':
/*
condition 1 | condition 2 | result
	  T		|		T	  |		T
      T     |		F	  |		F
      F     |		T	  |		F
      F     |		F	  |		F

truth table for 'OR' :

condition 1 | condition 2 | result
	  T		|		T	  |		T
      T     |		F	  |		T
      F     |		T	  |		T
      F     |		F	  |		F
*/

// logical operators are mostly ised in control flow.

#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 4;

	cout << ((a>b) || (a<b)) << endl;
    cout << ((3>=5) && (4<=3)) << endl;
	
    if(3>4) {
        cout << "Do this" << endl;
    }
    else {
        cout << "Do that!!" << endl;
    }

    return 0;
}