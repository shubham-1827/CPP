/* 
print all the primes till n.

input:
5

output:
2 3 5
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i{1}; i<=n; i++) {
        //checking if i is prime or not, by creating  
        // another loop
        int j{2};
        for (; j<=(i-1); j++) {
            if (i%j==0) {
                break;
            }
        }
        if (j==i) {
            cout << j << " ";
        }
    }
    return 0;
}