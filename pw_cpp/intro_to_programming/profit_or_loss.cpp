#include <iostream>
using namespace std;

int main()
{
  int cost_price, selling_price;
  cout << "Enter the cost price and selling price : ";
  cin >> cost_price >> selling_price;

  int difference = selling_price - cost_price;

  if (difference > 0)
  {
    cout << "you made a profit of " << difference << " dollars";
  }
  else
  {
    difference = -difference;
    cout << "you are in " << difference << " dollars loss";
  }
  cout << endl;

  return 0;
}