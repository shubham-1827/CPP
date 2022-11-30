//print the average of 5 integers and print the output 
// upto four decimal places

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int a,b,c,d,e;
    cout << "Enter five integers to find the average: ";
    cin >> a >> b >> c >> d >> e;

    int sum = (a+b+c+d+e);
    float average = (float)sum/5;
    cout << fixed << setprecision(4) << "The average is : " << average << endl;

    return 0;
}