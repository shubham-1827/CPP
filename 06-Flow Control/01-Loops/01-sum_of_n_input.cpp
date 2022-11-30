#include <iostream>
using namespace std;

int main () {
    int N{};
    cin >> N;
    int i{1}, sum{}, val{};

    while(i<=N) {
        cin >> val;
        sum+=val;
        i++;      
    }
    cout << sum << endl;
	
    return 0;
}
