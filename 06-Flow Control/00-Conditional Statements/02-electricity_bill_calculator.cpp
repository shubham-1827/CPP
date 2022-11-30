/*
 	units 		price
    0 to 100	Free
    100 to 200  Rs 5/unit
    200 to 300  Rs 10/unit
    300+ units  Rs 12/unit
*/
#include <iostream>
using namespace std;

int main () {
    double units{};
    double bill{};
	cout << "Welcome to the Electricity bill calculator." << endl;
    cout << "\nEnter the units: ";
    cin >> units;

    // if (units>=0) {
    //     if (units>100) {
    //         if(units-100 >= 100) {
    //             bill = 100*5;
    //         }
    //         else {
    //             bill = (units-100)*5;
    //         }
    //     }
    //     if (units>200) {
    //         if (units-200 >= 100) {
    //             bill += 100*10;
    //         }
    //         else {
    //             bill += (units-200)*10;
    //         }
    //     }
    //     if (units >300) {
	// 		bill += (units - 300)*12;
    //     }   

    //     cout << "\nYour consumed units are " << units << endl;
    //     cout << "Your bill is " << bill << endl;   
    // }
    // else {
    //     cout << "Enter a Valid Unit." << endl;
    // }

    // Another way:
	
    if(units<=100) {
        bill=0;
    }
    else if(units <=200) {
        bill= 0 + (units-100)*5;
    }
    else if(units<=300) {
        bill = 0 + (100*5) + (units-200)*10;
    }
    else {
        bill = 0 + (100*5) + (100*10) + (units-300)*12;
    }
    cout << "The consumed units are: " << units << endl;
    cout << "Your bill is Rs " << bill << endl;

    return 0;
}
