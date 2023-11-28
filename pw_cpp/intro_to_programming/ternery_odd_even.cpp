#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  // ternary operator - cool banne ki ninja technique
  (n % 2 == 0) ? cout << "even" : cout << "odd";

  return 0;
}