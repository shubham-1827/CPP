#include <stdio.h>

int main()
{
  int n;
  printf("Enter the size of the array : ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter the elements of the array : ");
  int maximum;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
    if (i == 0)
    {
      maximum = arr[i];
      continue;
    }
    if (maximum < arr[i])
    {
      maximum = arr[i];
    }
  }

  printf("maximum in array is %d\n", maximum);
  return 0;
}