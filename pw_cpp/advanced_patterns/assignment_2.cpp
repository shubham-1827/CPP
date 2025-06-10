#include <cstddef>
#include <iostream>

using namespace std;

void pattern_1(int n) {
  int nsp = n - 1;
  int nst = 1;
  for ( int i = 0; i < n; i++ ) {
    int count = 1;
    for ( int j = 0; j < nsp; j++ ) {
      cout << "  ";
    }
    for ( int j = 0; j < nst; j++ ) {
      cout << count << " ";
      count++;
    }
    nst += 2;
    nsp--;
    cout << endl;
  }
}

void pattern_2(int n) {
  int nsp = n - 1;
  int nst = 1;
  for ( int i = 0; i < n; i++ ) {
    char ch = 'A';
    for ( int j = 0; j < nsp; j++ ) {
      cout << "  ";
    }
    for ( int j = 0; j < nst; j++ ) {
      cout << (char)ch << " ";
      ch++;
    }
    nst += 2;
    nsp--;
    cout << endl;
  }
}

void pattern_3(int n) {
  int nsp = n - 1;
  for ( int i = 1; i <= n; i++ ) {
    char ch = 'A' + i - 1;
    for ( int j = 1; j <= nsp; j++ ) {
      cout << "  ";
    }

    for ( int j = 1; j <= i; j++ ) {
      cout << (char)ch << " ";
      ch--;
    }
    ch += 2;
    for ( int j = 1; j <= i - 1; j++ ) {
      cout << (char)ch << " ";
      ch++;
    }
    nsp--;
    cout << endl;
  }
}

void pattern_4(int n) {
  for ( int i = 0; i < 2 * n - 1; i++ ) {
    cout << (char)('A' + i) << " ";
  }
  cout << endl;
  int nst = n - 1;
  int nsp = 1;
  for ( int i = 1; i <= n - 1; i++ ) {
    char ch = 'A';
    for ( int j = 1; j <= nst; j++ ) {
      cout << ch << " ";
      ch++;
    }
    for ( int j = 1; j <= nsp; j++ ) {
      cout << "  ";
      ch++;
    }
    for ( int j = 1; j <= nst; j++ ) {
      cout << ch << " ";
      ch++;
    }
    nst--;
    nsp += 2;
    cout << endl;
  }
}

void pattern_5(int n) {
  //printing the first line
  int count = 1;
  for ( int i = 1; i <= 2 * n - 1; i++ ) {
    cout << count << " ";
    if ( i < n ) {
      count++;
    }
    else {
      count--;
    }
  }
  cout << endl;

  // now print the remaining bridge
  int nsp = 1;
  int nst = n - 1;
  for ( int i = 1; i <= n - 1; i++ ) {
    int count = 1;
    for ( int j = 1; j <= nst; j++ ) {
      cout << count << " ";
      count++;
    }
    count--;
    for ( int j = 1; j <= nsp; j++ ) {
      cout << "  ";
    }
    for ( int j = 1; j <= nst; j++ ) {
      cout << count << " ";
      count--;
    }
    nst--;
    nsp += 2;
    cout << endl;
  }
}

void pattern_6(int n) {
  int nsp1 = 0;
  int nsp2 = 2 * n - 3;
  for ( int i = 1; i <= n; i++ ) {
    // first print the startingg spaces
    for ( int j = 1; j <= nsp1; j++ ) {
      cout << "  ";
    }
    cout << "* ";
    for ( int j = 1; j <= nsp2; j++ ) {
      cout << "  ";
    }
    if ( i == n ) {
      continue;
    }
    cout << "* ";
    nsp1++;
    nsp2 -= 2;
    cout << endl;
  }
}

void pattern_8(int n) {
  for ( int i = 1; i <= n - 1; i++ ) {
    cout << "  ";
  }
  cout << 1 << endl;

  int nsp1 = n - 2;
  int nsp2 = 1;
  int count = 2;
  for ( int i = 1; i <= n - 1; i++ ) {
    for ( int j = 1; j <= nsp1; j++ ) {
      cout << "  ";
    }
    cout << count << " ";
    for ( int j = 1; j <= nsp2; j++ ) {
      cout << "  ";
    }
    cout << count << " ";
    count++;
    nsp1--;
    nsp2 += 2;
    cout << endl;
  }
}

void pattern_9(int n) {
  for ( int i = 1; i <= 2 * n - 1; i++ ) {
    for ( int j = 1; j <= 2 * n - 1; j++ ) {
      int tmp_i = i;
      int tmp_j = j;
      if ( i > n ) {
        tmp_i = 2 * n - i;
      }
      if ( j > n ) {
        tmp_j = 2 * n - j;
      }
      if ( tmp_i == n or tmp_j == n ) {
        cout << "* ";
      }
      else if ( (tmp_i + tmp_j - 1) == n ) {
        cout << "* ";
      }
      else {
        cout << "  ";
      }
    }
    cout << endl;
  }
}

void pattern_10(int n) {
  int nsp = 2 * n - 3;
  int nst = 1;
  for ( int i = 1; i <= n - 1; i++ ) {
    for ( int j = 1; j <= nst; j++ ) {
      cout << "* ";
    }
    for ( int j = 1; j <= nsp; j++ ) {
      cout << "  ";
    }
    for ( int j = 1; j <= nst; j++ ) {
      cout << "* ";
    }
    nsp -= 2;
    nst++;
    cout << endl;
  }

  for ( int i = 1; i <= 2; i++ ) {
    for ( int j = 1; j <= 2 * n - 1; j++ ) {
      cout << "* ";
    }
    cout << endl;
  }

  nst--;
  nsp += 2;
  for ( int i = 1; i <= n - 1; i++ ) {
    for ( int j = 1; j <= nst; j++ ) {
      cout << "* ";
    }
    for ( int j = 1; j <= nsp; j++ ) {
      cout << "  ";
    }
    for ( int j = 1; j <= nst; j++ ) {
      cout << "* ";
    }
    nsp += 2;
    nst--;
    cout << endl;
  }
}

void pattern_11(int n) {
  for ( int i = 1; i <= 2 * n - 1; i++ ) {
    cout << "* ";
  }
  cout << endl;

  int nsp = 1;
  int nst = n - 1;
  for ( int i = 1; i <= n - 1; i++ ) {
    for ( int j = 1; j <= nst; j++ ) {
      cout << "* ";
    }
    for ( int j = 1; j <= nsp; j++ ) {
      cout << "  ";
    }
    for ( int j = 1; j <= nst; j++ ) {
      cout << "* ";
    }
    nsp += 2;
    nst--;
    cout << endl;
  }

  nst += 2;
  nsp -= 4;
  for ( int i = 1; i <= n - 2; i++ ) {
    for ( int j = 1; j <= nst; j++ ) {
      cout << "* ";
    }
    for ( int j = 1; j <= nsp; j++ ) {
      cout << "  ";
    }
    for ( int j = 1; j <= nst; j++ ) {
      cout << "* ";
    }
    nsp -= 2;
    nst++;
    cout << endl;
  }

  for ( int i = 0; i < 2 * n - 1; i++ ) {
    cout << "* ";
  }
  cout << endl;
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

  return 0;
}
