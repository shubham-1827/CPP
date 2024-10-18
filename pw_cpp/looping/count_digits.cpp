#include <iostream>
using namespace std;

int main() {
  long long int n;
  cin >> n;

  if (n == 0) // this will tackle the case of 0
  {
    cout << 1 << endl;
  } else {
    int count = 0;

    while (n != 0) {
      count++;
      n /= 10; // this will reduce the length of number by 1
    }

    cout << count << endl;
  }

  return 0;
}
