#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
  a = a + b;
  b = a - b;
  a = a - b;
}

void swap_using_temp(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int main()
{
  int a, b;
  cout << "Enter two numbers : ";
  cin >> a >> b;

  swap(a, b);
  swap_using_temp(a, b);

  cout << "swapped a and b are : " << a << " " << b << endl;

  return 0;
}