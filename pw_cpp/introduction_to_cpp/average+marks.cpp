#include <iostream>
using namespace std;

int main()
{
  float english = 40;
  float maths = 56;
  float chemistry = 62;
  float physics = 61;
  float economics = 59;

  float average = (english + maths + chemistry + physics + economics) / 5;

  cout << "The average marks are " << average << endl;

  return 0;
}
