#include <iostream>
using namespace std;

int main()
{

  cout << "Enter the marks of Maths , Physics , Chemistry : ";
  int maths, physics, chemistry;
  cin >> maths >> physics >> chemistry;

  float average = (maths + physics + chemistry) / 3.0;

  cout << "The average of the marks is " << average << endl;

  return 0;
}