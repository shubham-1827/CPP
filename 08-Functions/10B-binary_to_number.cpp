#include <iostream>
#include <string>
using namespace std;

int binary_to_number(string BinaryInteger) {
    int sum{0};
    int powers_of_2{1};
    size_t size{BinaryInteger.size()};

    //calculatiing the value of digit
    for (size_t i{0}; i<size; i++) {
        if (BinaryInteger.at(i) == '1') {
			sum += (1 << (size - i - 1));
        }
    }
    return sum;
}

int main() {
	string n;
    cin >> n;
    cout <<  binary_to_number(n) << endl;
    return 0;
}