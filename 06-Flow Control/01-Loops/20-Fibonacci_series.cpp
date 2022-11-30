/* WAP that reads a number N and prints Nth Fibonacci number.

The Fibonacci series is an infinite series, starting from 0 (0th term) and 1 (1st term), in which every number in the series is the sum of two numbers preceding it in the series.
means:
fibonacci(0) = 0
fibonacci(1) = 1
fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)

Sample Input
2

Sample Output
1
The series is 0 1 1

Sample Input
5

Sample Output
3
The series is 0 1 1 2 3
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x{0};
	int y{1};
    int fib_value{};
	cout << "\n The series is ";
    for(int i{0}; i<=n; i++) {
        cout << fib_value << " ";
        x=y;
        y=fib_value;
        fib_value = x + y;
    }
    cout << endl;

    
    return 0;
}