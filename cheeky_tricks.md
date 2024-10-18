## All the cheeky and interesting things I study about cpp

### Properties of modulo

1. a % b - then a and b must be a integer
   ```cpp
   float a = 10, b = 3;
   cout << a % b << endl; //this will give the error
   ```
1. if a > b then a % b = remainder
   ```cpp
   int a = 10, b = 3;
   cout << a % b << endl; // the output will be 1
   ```
1. if a < b then a % b = a
   ```cpp
   int a = 3, b = 10;
   cout << a % b << endl; // this is print 3
   ```
1. a % (-b) = a % b
   ```cpp
   int a = 10, b = 3;
   cout << a % (-b) << endl; // this will be same as a % b
   ```
1. (-a) % b = -(a % b)
   ```cpp
   int a = 5, b = 2;
   cout << (-a) % b << endl;
   cout << -(a % b) << endl;
   //both will print the same value
   ```

### Important ascii values

remember these six ascii values -- a = 97, z = 122, A = 65, Z = 90, 0 = 48, 9 = 57

### Find the location of a alphabet

```cpp
char ch;
cin >> ch;


if (ch >= 65 and ch <= 90)
    cout << "location : " << (int)ch - 64 << endl;
else
    cout << "location : " << (int)ch - 96 << endl;

```

### To find the absolute value of a number

```cpp
int n;
cin >> n;

if (n < 0)
    n = -n;

cout << n;
```

### Count the number of digits in a number

```cpp
long long int n;
cin >> n;

int count = 0;
while (n != 0) {
    n /= 10;
    count++;
}

cout << count << endl;

```

### some pretty dangerous infinite loops

```cpp
bool flag = true;
while (flag) {
    cout << "chud gayi";
}

while ('a' < 'b') {
    cout << "chud gayi";
}

int a = 1;
while (a =10) {
    cout << "chud gayi";
}
```

### Number raised to another number

```cpp
int a, b;
//finding a ^ b

cin >> a >> b;

for (int i = 0; i < b; i++) {
    a *= a;
}

cout << a << endl;
```
