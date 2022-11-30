/*
input:
n = 3

output:
  *
 ***
*****

observations:
1.no. of rows = n
2. no. of spaces in ith row = (n-i)
3. no. of stars in ith row = (2i-1)
*/
#include <iostream>
using namespace std;

int main() {
    int n{};
    cin >> n;
	int i{};
    for (i = 1 ; i<=n; i++) {
		//prints spaces
        int spaces = 1;
        while(spaces<=(n-i)) {
            cout << " ";
            spaces++;
        }
        //prints stars
        int stars = 1;
        while (stars<=(2*i-1)) {
            cout << "*";
            stars++;
        }
        //new line
        cout << endl;
    }

    return 0;
}
