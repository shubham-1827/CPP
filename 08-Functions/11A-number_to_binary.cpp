#include<iostream>
using namespace std;

int reverse_number(int n) {
    int rev_n{0};
    for(;n!=0; n/=10) {
        int last_binary{n%10};
        rev_n = (rev_n*10) + last_binary;
    }
    return rev_n;
}

int number_to_binary(int n) {
    int binary{0};
    //using temp because we need n to check if number is even or odd.
    int temp{n};
    for(;temp!=0; temp/=2) {
        //this will give you the remainder in 1s(for odd) and 0s(for even),
        int remainder{temp%2};
		binary = (binary*10) + remainder;
    }
    binary = reverse_number(binary);
    if(n%2==0) {
        //this will add a 0 which is removed while conversion,
        //incase of odd number, there is no zero in the end so we dont want this
        binary = (binary*10);
    }
    return binary;
}

int main () {
	int n;
    cin >> n;

    cout << number_to_binary(n) << endl;

    return 0;
}