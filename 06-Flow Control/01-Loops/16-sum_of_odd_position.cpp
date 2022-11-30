/*
for odd number of digits:
	number - 12432
  position - 12345
  position - 54321
for even number of digits:
	number - 1423
  position - 1234
  position - 4321
(in case of even number of digits odd and even positions
are swapped when looking from front and back so we first 
need to reverse the number if we are taking the positions 
from backside)
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
	
    int rev_n{};
    for(;n!=0; n/=10) {
        int last_digit {n%10};
        rev_n = (rev_n*10) + last_digit;
    }
    int sum {};
    int position{1};
    for(;rev_n!=0; rev_n/=10, position++) {
        int last_digit {rev_n%10};
		if (position%2!=0) {
            sum+=last_digit;
        }
    }
    cout << sum << endl;
    
    return 0;
}