## All the Array Algorithms I study in my life

### finding the size of Array

To find the size of array we use the **sizeof()** function.  
we divide the size of the array by the size of the element in the array

```cpp
int arr[] = {1, 2, 3, 4, 5};

int size = sizeof(arr) / sizeof(arr[0]);

```

### swapping two numbers in array

1. Swapping using the temp variable

```cpp
int arr[] = {1, 2, 3, 4, 5};

//swapping first and last element of the array

int temp = arr[0];
arr[0] = arr[4];
arr[4] = temp;

```

2. Swapping using the use of mathematics.

```cpp

int arr[] = {1, 2, 3, 4, 5};

//swapping first and last element of the Array

arr[0] = arr[0] + arr[4];
arr[4] = arr[0] - arr[4];
arr[0] = arr[0] - arr[4];

```

### Sum of elements of the array

```cpp
int n;
cin >> n;

int arr[n];

for(int i = 0; i < n; i++){
    cin >> arr[i];
}

//finding the sum of all elements of the array

int sum = 0;
for (int i = 0; i < n; i++) {
    sum += arr[i];
}
cout << sum << endl;

```
