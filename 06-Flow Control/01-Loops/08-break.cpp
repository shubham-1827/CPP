//if you want to break out of the loop at a certain point,
// before the loop execution you can use break.

#include <iostream>
using namespace std;

int main() {
    int calorie{};
    int gf_calls_up=40;

    while(calorie<=100) {

        if(calorie==gf_calls_up) {
            cout << "Bye bye gym" << endl;
            break;
        }

        cout << "Running and burning " << calorie << endl;
        calorie++;
    }
    return 0;
}