#include <iostream>
using namespace std;

void largest_string(int n) {
    char largest[1000]{};
    char current[1000]{};
    
    for(int i{0}; i<n; i++) {
        cin.getline(current, 1000);

        if (strlen(current) > strlen(largest)) {
            strcpy(largest, current);
        }
    }
    cout << endl;
    cout << largest << endl;
}
int main() {
    int n;
    cin >> n;
    cin.get();
    
    largest_string(n);
    return 0;
}