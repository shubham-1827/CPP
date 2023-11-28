// assume you are printing the reverse of the given problem
//  like problem is
/*
  4444444
  4333334
  4322234
  4321234
  4322234
  4333334
  4444444

so try to solve this first :

  1111111
  1222221
  1233321
  1234321
  1233321
  1222221
  1111111

if we divide this into 4 quadrants then we get the first quadrant as :

   1 2 3 4 - j

1  1 1 1 1
2  1 2 2 2
3  1 2 3 3
4  1 2 3 4
|
i

we will use a variable 'a', which will reset after every outer loop iteration
value in each cell(i,j) is equal to min(i,j)

  */

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  for (int i = 1; i <= (2 * n - 1); i++)
  {
    for (int j = 1; j <= (2 * n - 1); j++)
    {
      int minimum;
      int i2 = (2 * n - i);
      int j2 = (2 * n - j);
      if (i <= n) // for first upper half
      {

        if (j <= n) // for first quadrant
        {
          minimum = (i <= j) ? i : j;
          // or you can use the min() function
          // cout << min(i,j);
        }
        else
        {

          minimum = min(i, j2); // for second quadrant
        }
      }
      else // for lower half
      {
        if (j <= n)
        {
          minimum = min(i2, j); // for third quadrant
        }
        else
        {
          minimum = min(i2, j2); // for fourth quadrant
        }
      }
      cout << (n - minimum + 1) << " ";
    }
    cout << endl;
  }

  return 0;
}

/*
if we write :
  cout << minimum << " ";

then output is :
  1 1 1 1 1 1 1
  1 2 2 2 2 2 1
  1 2 3 3 3 2 1
  1 2 3 4 3 2 1
  1 2 3 3 3 2 1
  1 2 2 2 2 2 1
  1 1 1 1 1 1 1

but if we write :
  cout << (n - minimum + 1) << " ";

the output is :
  4 4 4 4 4 4 4
  4 3 3 3 3 3 4
  4 3 2 2 2 3 4
  4 3 2 1 2 3 4
  4 3 2 2 2 3 4
  4 3 3 3 3 3 4
  4 4 4 4 4 4 4

(n - minimum + 1) reverse the values in the output
*/