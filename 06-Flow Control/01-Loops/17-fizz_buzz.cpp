/* 
for first n natural numbers:
for number divisible by 3 print "Fizz"
		   divisible by 5 print "Buzz"
           divisible by both print "FizzBuzz"
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i{1}; i<=n; i++) {
        if(i%3==0 || i%5==0) {
            if(i%3==0) {
                cout << "Fizz";
            }
            if(i%5==0) {
                cout << "Buzz";
            }
            cout << " ";
            continue;
        }
        cout << i << " ";
    }

    return 0;
}