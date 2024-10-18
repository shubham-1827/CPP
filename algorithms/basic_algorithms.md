## All the Algorithms I study in my Life

### To find the _Simple Interest(SI)_

**Steps :**

1. read principle(p), rate(r), time(t)
1. create a variable simple interest :  
   si = p*r*t/100
1. print the _si_

```cpp
float principle, rate, time;
cin >> principle >> rate >> time;

float si = principle * rate * time / 100;

cout << si << endl;
```

### To find the average marks of the students

**Given :** the marks of 5 students in class

**Steps :**

1. read marks of 5 students
2. create a variable average :  
   average = m1 + m2 + m3 + m4 + m5 / 5
3. print average marks of the students

```cpp
int marks_1 = 50;
int marks_2 = 62;
int marks_3 = 73;
int marks_4 = 45;
int marks_5 = 56;

int total_students = 5;

float average = (float)(marks_1 + marks_2 + marks_3 + marks_4 + marks_5)/total_students;

cout << average << endl;
```

### To find the area of circle

**Area of Circle** = pi \* r <sup>2</sup>

**Steps :**

1. read radius
2. create a constant variable PI
3. find the area of the circle :
   area = PI \* r \* r
4. print area of circle

```cpp
float radius;
cin >> radius;

const float PI = 3.1415;

float area = PI * r * r;

cout << area << endl;
```

### To find the volume of sphere

**Volume of Sphere :** (4/3) \* PI \* r <sup>2</sup>

**Steps :**

1. read radius of sphere
2. create a constant variable PI
3. find the volume of sphere :
   volume = (4/3) \* PI \* r <sup>2</sup>
4. print volume of sphere

```cpp
float radius;
cin >> radius;

const float PI = 3.1415;

float volume = (4/3) * PI * r * r * r;

cout << volume << endl;
```

### To find the remainder of a division without using modulo operator

**Steps :**

1. read a (dividend) and b (divisor) such that a > b
1. using the formula :  
   dividend = divisor \_ qoutient + remainder  
   => remainder = dividend - divisor \* qoutient
1. create a new variable r (remainder)
1. r = a - b\*(a/b)

```cpp
int a, b;
cin >> a >> b; // a > b

int dividend = a;
int divisor = b;
int qoutient = a / b;

int remainder = dividend - (divisor * qoutient);

cout << remainder << endl;

```

### To find the fractional part of a float

**Fractional part** is the _Decimal part_ of a number.

**Steps :**

1. take a number x as input
1. find the integer part of x
1. subtract that integer part from the given x
1. if the number x is negative then sutract -(|int_x| + 1)

```cpp
float x;
cin >> x;

int int_x = int(x);
if (x < 0)
    int_x--;

float fract_part = x - (float)int_x;
cout << fract_part << endl;
```

### To make a simple calculator

Using _Switch case_ to create the **Calculator**.

```cpp
int a, b;
char op;
cin >> a >> op >> b;

switch (op) {
case '+':
    cout << (a + b) << endl;
    break;
case '-':
    cout << (a - b) << endl;
    break;
case '*':
    cout << (a * b) << endl;
    break;
case '/':
    cout << (a / b) << endl;
    break;
case '%':
    cout << (a % b) << endl;
    break;
default :
    cout << "enter correct operator" << endl;
    break;
}
```

### To check if a number is divisible by 3 or 5

**Steps :**

1. read a number n
2. check if the number is divisible by 3 or by 5
3. print the corresponding divisibility for that number

```cpp
int n;
cin >> n;

if (n % 15 == 0) {
    cout << "Divisible by both 3 and 5" << endl;
}
else if (n % 5 == 0) {
    cout << "Divisible by 5" << endl;
}
else {
    cout << "Divisible by 3" << endl;
}

```

### Greatest of 3 numbers

**Steps :**

1. read a, b, c
2. check if a is greater than b and a is greater than c
   if yes then print the value as a
3. check if b is greater than a and b is greater than c
   if yes then print the value as b
4. if both are not greater than c is the greatest

```cpp
int a, b, c;
cin >> a >> b >> c;

if (a >= b and a >=c) {
    cout << a << endl;
}
else if (b >= a and b >=c) {
    cout << b << endl;
}
else {
    cout << c << endl;
}
```

### Greatest of three numbers without and

```cpp
int a, b, c;
cin >> a >> b >> c;

if (a >=b) {
    if (a >=c) {
        cout << a;
    }
}
else {
    if (b >= c) {
        cout >> b;
    }
    else {
        cout >> c;
    }
}

cout << endl;
```

### To check if a number is odd or even

**Steps :**

1. read number n
2. check if the number is even or odd
3. print even if number is even and vice-versa

```cpp
int n;
cin >> n;

// using if else
if (n % 2 == 0) {
    cout << "even";
}
else {
    cout << "odd";
}
cout << endl;

// using ternary operator
String output =

```

### To check if the given sides form a triangle or not

**Steps :**

1. read sides of triangle (a, b, c)
2. check if a + b > c and a + c > b and b + c > a
3. if the above condition is true then print the output as yes oterwise no

```cpp
int a, b, c;
cin >> a >> b >> c;

if ((a + b > c) and (a + c > b) and (b + c > a)) {
    cout << "yes";
}
else {
    cout << "No";
}

cout << endl;
```

### To count the digits in a number

**Steps :**

1. read the number (n)
2. create a variable count
3. decrease the no. of digits in the number by 1 and increment the count by 1 after every iteration until the number becomes zero
4. print the total number of digits (count)

```cpp
long long int n;
cin >> n;

int count = 0;
while (n!=0) {
   count++;
   n/=10;
}
```

### To display the ap

**Steps :**

1. read first element(a), common_difference(d), no. of terms(n)
2. iterate till n elements, and increase the value of a by d
3. print a after every iteration

```cpp
int a, d, n;
cin >> a >> d >> n;

// using logic
for (int i = 0; i < n; i++) {
    cout << a << " ";
    a += d;
}

//using math formula
for (int i = a; i <= (a + (n-1)*d); i += d) {
    cout << i << " ";
```

### To print the gp

**Steps :**

1. Read a, r, n
2. pretty similar logic as ap above, but for gp

```cpp
int a, r, n;
cin >> a >> r >> n;

//using logic
for (int i = 0; i < n; i++) {
    cout << a <<  " ";
    a *= r;
}

//using mathematical formula
int power_r = 1;
for (int i = 0; i < n - 1; i++) {
    r *= r;
}
for (int i = a; i <= (a*power_r); i*=r) {
    cout << i << " ";
}
cout << endl;
```

### To find if a number is _Prime_ or not

**Steps :**

1. read a number (n)
2. check if the number is divisible by any number in the range 2 to n-1
3. if divisible, then it is not a prime number

```cpp
int n;
cin >> n;

bool is_prime = true;
for (int i = 2; i < n-1; i++) {
    if (n % i == 0) {
        is_prime = false;
        break;
    }
}
if (is_prime) {
    cout << "Prime";
}
else {
    cout << "Not prime";
}
```

### To calculate the _GCD_ of two numbers

**Steps :**

1. read a, b
2. assuming a is smaller, then the greatest number in the range 1 to a, that is a factor of b is the _GCD_
3. print the GCD

```cpp
int a, b;
cin >> a >> b;

// iterating backwards to find the gcd faster
f+++++++++++++++++++++<F12>or (int i = min(a,b); i >= 1; i--) {
    if (max(a,b) % i == 0) {
        cout << i; //i is the GCD
        break;
    }
}
```

### To calculate the factorial of a number

**Steps :**

1. Read n
2. create a variable factorial = 1
3. from range 1 to n, after each iteration multiply all the numbers into factorial
4. print the factorial

```cpp
int n;
cin >> n;

long long int fact = 1;
for (int i = 1; i <= n; i++) {
    fact *= i;
}
cout << fact << endl;
```

### To print the fibonnaci till n

**Steps :**

1. read a number (n)
2. create a three variables a,b and c  
   (a - first element, b - second element, z - third element)
3. initialize a and b with 1
4. after every iteration, make z = a + b, a = b, b = z
5. print the fibonacci after every every iteration

```cpp
int n;
cin >> n;

int a = 1, b = 1, c;

for (int i = 1; i <= (n-2); i++) {

    c = a + b;
    a = b;
    b = c;

    cout << b << " ";
}
cout << endl;
```
