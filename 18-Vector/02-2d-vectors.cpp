#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> numbers {
        {1,2,3,4,6},
        {1,2,3},
        {1,2,3,5,6},
        {1,3,6,4}
    };
    
    //printing 2d vecotr.
    for(auto row : numbers) {
        for(int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    cout << endl;
	
    //accessing the element.
    //can also use numbers[1][2]
    cout << numbers.at(1).at(2) << endl;

    return 0;
}