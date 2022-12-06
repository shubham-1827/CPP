#include <iostream>
using namespace std;

//functions can return a value, you must specify the return type of a function
int areaofcircle(int radius) {
    return 3.14*radius*radius;
}

//functions other than main can also call diffrernt functions for the subtasks.
int calculatevolume(int height, int radius) {
    return areaofcircle(radius) * height;
}

int volumeofcylinder(int height, int radius) {
    //calling calculatevolume() inside volumeofcylinder()
    return calculatevolume(height, radius);
}
int main() {
    //storing the return value in variables
   int circle = areaofcircle(10);
   int cylinder = volumeofcylinder(8, 6);

   cout << circle << " " << cylinder << endl;
   return 0;
}