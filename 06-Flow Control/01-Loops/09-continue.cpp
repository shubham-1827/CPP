/*
continue is used when you want to start a loop again at a certain point.
continue will take you at the top of the loop, and start executing the loop again
*/
#include <iostream>
using namespace std;

int main() {
    int calorie{};
    int gf_calls_up{10}, gf_call_again{20};

    for(;calorie<=40;calorie++) {

        if(calorie==gf_calls_up || calorie==gf_call_again) {
            cout << "Fuck you, bitch..." << endl;
            continue;
        }
        
        cout << "running and burning " << calorie << endl;
    }
    cout << "Go to home." << endl;

    return 0;
}