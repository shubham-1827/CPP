#include <iostream>

using namespace std;

void pattern_1(int n) {
  int count = 1;
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < n; j++ ) {
      cout << count;
    }
    cout << endl;
    count++;
  }
}

void pattern_2(int n) {
  for ( int i = 1; i <= n; i++ ) {
    int count = 1;
    for ( int j = 1; j <= n - i + 1; j++ ) {
      cout << count << " ";
      count++;
    }
    cout << endl;
  }
}

void pattern_3(int n) {
  for ( int i = 0; i < n; i++ ) {
    char ch = 'A';
    for ( int j = 0; j <= i; j++ ) {
      cout << (char)ch << " ";
      ch++;
    }
    cout << endl;
  }
}

void pattern_4(int n) {
  for ( int i = 1; i <= n + 1; i++ ) {
    char ch = 'A';
    for ( int j = 1; j <= i; j++ ) {
      if ( i % 2 ) {
        cout << j << " ";
        continue;
      }
      cout << (char)ch << " ";
      ch++;
    }
    cout << endl;
  }
}

void pattern_5(int n) {
  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 1; j <= i; j++ ) {
      cout << "* ";
    }
    cout << endl;
  }
  for ( int i = 1; i <= n - 1; i++ ) {
    for ( int j = 1; j <= (n - 1) - i + 1; j++ ) {
      cout << "* ";
    }
    cout << endl;
  }
}

void pattern_6(int m, int n) {
  // print the first line
  for ( int i = 0; i < n; i++ ) {
    cout << "* ";
  }
  cout << endl;

  // now print the middle part
  for ( int i = 1; i <= m - 2; i++ ) {
    for ( int j = 1; j <= n; j++ ) {
      if ( j == 1 or j == n ) {
        cout << "* ";
      }
      else {
        cout << "  ";
      }
    }
    cout << endl;
  }

  // now print the last line
  for ( int i = 0; i < n; i++ ) {
    cout << "* ";
  }
}

void pattern_10(int n) {
  for ( int i = 1; i <= n; i++ ) {
    int count = i;
    for ( int j = 1; j <= i; j++ ) {
      cout << count << " ";
      count--;
    }
    cout << endl;
  }
}

// Q. 7, 8, 9 -> very very easy
// Q. 11 -> same as Q. 5

int main() {
  int n;
  int m;
  cin >> m >> n;

  // pattern_1(n);
  // pattern_2(n);
  // pattern_3(n);
  // pattern_4(n);
  // pattern_5(n);
  // pattern_10(n);
  pattern_6(m, n);

  return 0;
}
