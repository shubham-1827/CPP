#include <iostream>
using namespace std;

pair<int, int> linear_search(int x, int arr[3][3])
{ // Function to perform Linear Search in a 2D array.
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (arr[i][j] == x)
      {
        return make_pair(i, j);
      }
    }
  }
  int
}

pair<int, int> staircase_search(int x, int arr[3][3])
{
  pair<int, int> location = linear_search(x, arr);

  return location;

  {
    int main()
    {
      int arr[3][3];

      cout << "Enter the elements of the array : " << endl;
      linear for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++)
        {
          cin >> arr[i][j];
        }
      }

      int x;
      cout << "Enter the element to search in array : ";
      cin >> x;

      pair<int, int> indices = linear_search(x, arr);

      cout << "the element x is found at indices  (" << indices.first << "," << indices.second << ")";

      return 0;
    }