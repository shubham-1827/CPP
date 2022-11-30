//for loops and while loops are nearly same, they have the same speed same time complexity, and every while loop can be converted into for loop and vice versa

//for loops are just compact syntax of a while loop.
/* 
for loop syntax:
	for (initialization; stopping criteria; update condition) {

        work....

    }
*/
#include <iostream>
using namespace std;

int main () {
    int N;
    cin >> N;
    int cal;
    int sum{};
    int val{};

    for(cal=1; cal<=N; cal++) {
        cin >> val;
        sum += val;
    }
    cout << sum << endl;

    return 0;
}