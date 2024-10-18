## All the Searching Algorithms I study in my life

### Linear Search in a array

This is a pretty _Straitforward_ searching algorithms in which we itrates over an array from start to end to find the needed element.

```cpp
int x;
cin >> x;

for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
        cout << i << endl;
        break;
    }
}

```
