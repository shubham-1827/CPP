#include <algorithm>
#include <iostream>

using namespace std;

void pattern_1(int n) {
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < n; j++ ) {
      cout << "* ";
    }
    cout << endl;
  }
}

void pattern_2(int n) {
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < n; j++ ) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}

void pattern_3(int n) {
  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 1; j <= i; j++ ) {
      cout << "* ";
    }
    cout << endl;
  }
}

void pattern_4(int n) {
  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 1; j <= n - i + 1; j++ ) {
      cout << "* ";
    }
    cout << endl;
  }
}

void pattern_5(int n) {
  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 1; j <= i; j++ ) {
      cout << j << " ";
    }
    cout << endl;
  }
}

void pattern_6(int n) {
  for ( int i = 1; i <= n; i++ ) {
    int count = 1;
    for ( int j = 1; j <= i; j++ ) {
      cout << count << " ";
      count += 2;
    }
    cout << endl;
  }
}

void pattern_7(int n) {
  for ( int i = 0; i < n; i++ ) {
    char ch = 'A';
    for ( int j = 0; j < n; j++ ) {
      cout << (char)ch << " ";
      ch++;
    }
    cout << endl;
  }
}

void pattern_8(int n) {
  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 1; j <= n; j++ ) {
      if ( i == (n / 2 + 1) or j == (n / 2 + 1) ) {
        cout << "* ";
        continue;
      }
      cout << "  ";
    }
    cout << endl;
  }
}

void pattern_9(int n) {
  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 1; j <= n; j++ ) {
      if ( i == j or j == n - i + 1 ) {
        cout << "* ";
        continue;
      }
      cout << "  ";
    }
    cout << endl;
  }
}

void pattern_10(int n) {
  int count = 1;
  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 1; j <= i; j++ ) {
      cout << count << " ";
      count++;
    }
    cout << endl;
  }
}

void pattern_11(int n) {
  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 1; j <= i; j++ ) {
      if ( (i + j) % 2 == 0 ) {
        cout << 1 << " ";
      }
      else {
        cout << 0 << " ";
      }
    }
    cout << endl;
  }
}

void pattern_12(int n) {
  for ( int i = 1; i <= n; i++ ) {
    // spaces
    for ( int j = 1; j <= n - i; j++ ) {
      cout << "  ";
    }
    //stars
    for ( int j = 1; j <= i; j++ ) {
      cout << "* ";
    }
    cout << endl;
  }
}

void pattern_13(int n) {
  for ( int i = 1; i <= n; i++ ) {
    // spaces
    for ( int j = 1; j <= n - i; j++ ) {
      cout << "  ";
    }
    //stars
    for ( int j = 1; j <= i; j++ ) {
      cout << j << " ";
    }
    cout << endl;
  }
}

void pattern_14(int n) {
  for ( int i = 1; i <= n; i++ ) {
    // spaces
    for ( int j = 1; j <= n - i; j++ ) {
      cout << "  ";
    }
    //stars
    for ( int j = 1; j <= n; j++ ) {
      cout << "* ";
    }
    cout << endl;
  }
}

void pattern_15(int n) {
  int nst = 1;
  int nsp = n - 1;
  for ( int i = 1; i <= n; i++ ) {
    //spaces
    for ( int j = 1; j <= nsp; j++ ) {
      cout << "  ";
    }
    //stars
    for ( int j = 1; j <= nst; j++ ) {
      cout << "* ";
    }
    nst += 2;
    nsp--;
    cout << endl;
  }
}

void pattern_16(int n) {
  int nsp = n - 1;
  for ( int i = 1; i <= n; i++ ) {
    //spaces
    for ( int j = 1; j <= nsp; j++ ) {
      cout << "  ";
    }
    // acsending numbers
    int count = 1;
    for ( int j = 1; j <= i; j++ ) {
      cout << count << " ";
      count++;
    }
    count -= 2;
    // descending numbers
    for ( int j = 1; j <= i - 1; j++ ) {
      cout << count << " ";
      count--;
    }
    nsp--;
    cout << endl;
  }
}

void pattern_17(int n) {
  // first print the upper half of diamond
  int nst = 1;
  int nsp = n - 1;
  for ( int i = 1; i <= n; i++ ) {
    //spaces
    for ( int j = 1; j <= nsp; j++ ) {
      cout << "  ";
    }
    //starts
    for ( int j = 1; j <= nst; j++ ) {
      cout << "* ";
    }
    cout << endl;
    nst += 2;
    nsp--;
  }

  // Now print the remaining bottom part
  nst -= 4;
  nsp += 2;
  for ( int i = 1; i <= n - 1; i++ ) {
    //spaces
    for ( int j = 1; j <= nsp; j++ ) {
      cout << "  ";
    }
    //starts
    for ( int j = 1; j <= nst; j++ ) {
      cout << "* ";
    }
    cout << endl;
    nst -= 2;
    nsp++;
  }
}

void pattern_18(int n) {
  // printing the first row
  for ( int i = 1; i <= 2 * n - 1; i++ ) {
    cout << "* ";
  }
  cout << endl;

  // now printing the rest by dividing into 3 sections
  int nsp = 1;
  int nst = n - 1;
  for ( int i = 1; i <= n - 1; i++ ) {
    // printing first stars
    for ( int j = 1; j <= nst; j++ ) {
      cout << "* ";
    }
    // spaces
    for ( int j = 1; j <= nsp; j++ ) {
      cout << "  ";
    }
    for ( int j = 1; j <= nst; j++ ) {
      cout << "* ";
    }
    cout << endl;
    nsp += 2;
    nst--;
  }
}

void pattern_19(int n) {
  for ( int i = 1; i <= 2 * n - 1; i++ ) {
    for ( int j = 1; j <= 2 * n - 1; j++ ) {
      int tmp_i = (i > n) ? (2 * n - i) : i;
      int tmp_j = (j > n) ? (2 * n - j) : j;
      cout << max(n - tmp_i + 1, n - tmp_j + 1) << " ";
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;

  // pattern_1(n);
  // pattern_2(n);
  // pattern_3(n);
  // pattern_4(n);
  // pattern_5(n);
  // pattern_6(n);
  // pattern_7(n);
  // pattern_8(n);
  // pattern_9(n);
  // pattern_10(n);
  // pattern_11(n);
  // pattern_12(n);
  // pattern_13(n);
  // pattern_14(n);
  // pattern_15(n);
  // pattern_16(n);
  // pattern_17(n);
  // pattern_18(n);
  pattern_19(n);

  return 0;
}
