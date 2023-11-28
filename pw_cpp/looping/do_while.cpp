#include <iostream>
using namespace std;

int main()
{
  // do while loop always run atleast one time irrespective of the condition

  int n;
  cin >> n;

  int i = 1;
  do
  {
    cout << i << " ";
    i++;
  } while (i <= n);

  return 0;
}