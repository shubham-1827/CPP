#include <iostream>
#include <vector>
using namespace std;

int main() {
    //creating a vector.
    vector <int> number = {1,2,3,4,5,6};
	
    //size gives you how many elements are stored.
    cout << number.size() << endl;
	
    //capacity gives you what's the current capacity.
    cout << number.capacity() << endl;

    //printing the vector.
    for(int i{0}; i<number.size();i++) {
        //can use number[i] but, .at() method provide bound checking.
        cout << number.at(i) << " ";
    }
    cout << endl;

    //push_back adds element at the end of vector.
    number.push_back(7);
	
    //printing a vector with for each loop.
    for(int x : number) {
        cout << x << " ";
    }
    cout << endl;

	//doubling happpens:
    cout << number.capacity() << endl;

    return 0;
}