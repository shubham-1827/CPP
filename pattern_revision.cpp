#include <algorithm>
#include <iostream>
using namespace std;

void number_spiral(int n) {
  for (int i = 1; i <= (2 * n - 1); i++) {
    for (int j = 1; j <= (2 * n - 1); j++) {
      int new_i = i;
      int new_j = j;
      if (i > n) {
        new_i = 2 * n - i;
      }
      if (j > n) {
        new_j = 2 * n - j;
      }
      // if (new_i <= new_j) {
      //   cout << (n - new_i + 1) << " ";
      // } else {
      //   cout << (n - new_j + 1) << " ";
      // }
      int x = min(new_i, new_j);
      cout << n - x + 1 << " ";
    }
    cout << endl;
  }
}

void number_bridge_pattern(int n) {
  int nst = n - 1;
  int nsp = 1;
  for (int i = 1; i <= n; i++) {
    int count = 1;
    // first row
    if (i == 1) {
      for (int r = 1; r <= (2 * n - 1); r++) {
        cout << count << " ";
        count++;
      }
    } else {
      for (int j = 1; j <= nst; j++) {
        cout << count << " ";
        count++;
      }
      for (int k = 1; k <= nsp; k++) {
        cout << "  ";
        count++;
      }
      for (int j = 1; j <= nst; j++) {
        cout << count << " ";
        count++;
      }
      nst--;
      nsp += 2;
    }
    cout << endl;
  }
}

void bridge_pattern(int n) {
  int nst = n - 1;
  int nsp = 1;
  for (int i = 1; i <= n; i++) {
    // first row
    if (i == 1) {
      for (int r = 1; r <= (2 * n - 1); r++) {
        cout << "* ";
      }
    } else {
      for (int j = 1; j <= nst; j++) {
        cout << "* ";
      }
      for (int k = 1; k <= nsp; k++) {
        cout << "  ";
      }
      for (int j = 1; j <= nst; j++) {
        cout << "* ";
      }
      nst--;
      nsp += 2;
    }
    cout << endl;
  }
}

void star_diamond(int n) {
  int rows = (2 * n - 1);
  int nsp = (n - 1);
  int nst = 1;
  for (int i = 1; i <= rows; i++) {

    for (int j = 1; j <= nsp; j++) {
      cout << "  ";
    }
    for (int k = 1; k <= nst; k++) {
      cout << "* ";
    }
    cout << endl;

    if (i >= n) {
      nsp++;
      nst -= 2;
      continue;
    }

    nst += 2;
    nsp--;
  }
}

void number_pyramind_palindrome(int n) {
  int nsp = (n - 1);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= nsp; j++) {
      cout << "  ";
    }
    for (int k = 1; k <= i; k++) {
      cout << k << " ";
    }
    for (int k = i - 1; k >= 1; k--) {
      cout << k << " ";
    }
    cout << endl;
    nsp--;
  }
}

void star_pyramid_alter(int n) {
  int nsp = (n - 1);
  int nst = 1;
  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= nsp; j++) {
      cout << "  ";
    }
    for (int k = 1; k <= nst; k++) {
      cout << "* ";
    }
    cout << endl;
    nst += 2;
    nsp--;
  }
}

void star_pyramid(int n) {
  for (int i = 1; i <= n; i++) {
    // for spaces
    for (int k = 1; k <= (n - i); k++) {
      cout << "  ";
    }
    // for stars
    for (int j = 1; j <= (2 * i - 1); j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void rhombus_pattern(int n) {
  for (int i = 1; i <= n; i++) {
    // for spaces
    for (int k = 1; k <= (n - i); k++) {
      cout << "  ";
    }
    // for stars
    for (int j = 1; j <= n; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void number_triangle_flipped(int n) {
  for (int i = 1; i <= n; i++) {
    // for spaces
    for (int k = 1; k <= (n - i); k++) {
      cout << "  ";
    }
    // for stars
    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}
void star_triangle_flipped(int n) {
  for (int i = 1; i <= n; i++) {
    // for spaces
    for (int k = 1; k <= (n - i); k++) {
      cout << "  ";
    }
    // for stars
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void binary_triangle(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << (((i + j) % 2) ? 0 : 1) << " ";
    }
    cout << endl;
  }
}

void number_sequence_triangle(int n) {
  int count = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << count << " ";
      count++;
    }
    cout << endl;
  }
}

void plus_pattern(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if ((j == (n / 2) + 1) or (i == (n / 2) + 1)) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
}

void cross_pattern(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == j or j == (n - i + 1)) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
}
void alphabet_square(int n) {
  for (int i = 1; i <= n; i++) {
    char ch = 'A';
    for (int j = 1; j <= n; j++) {
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
}
void odd_number_triangle(int n) {
  for (int i = 1; i <= n; i++) {
    int count = 1;
    for (int j = 1; j <= i; j++) {
      cout << count << " ";
      count += 2;
    }
    cout << endl;
  }
}

void star_triangle(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void star_triangle_reverse(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= (n - i + 1); j++) {
      cout << n - i + 1;
    }
    cout << endl;
  }
}

void print_square(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void number_square(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}

void print_rectangle(int l, int b) {
  for (int i = 1; i <= b; i++) {
    for (int j = 1; j <= l; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

int main() {

  // int l, b;
  // cin >> l >> b;
  int n;
  cin >> n;

  // print_rectangle(l, b);
  // print_square(n);
  // number_square(n);
  // star_triangle(n);
  star_triangle_reverse(n);
  // odd_number_triangle(n);
  // alphabet_square(n);
  // plus_pattern(n);
  // cross_pattern(n);
  // number_sequence_triangle(n);
  // binary_triangle(n);
  // star_triangle_flipped(n);
  // number_triangle_flipped(n);
  // rhombus_pattern(n);
  // star_pyramid(n);
  // star_pyramid_alter(n);
  // number_pyramind_palindrome(n);
  // star_diamond(n);
  // bridge_pattern(n);
  // number_bridge_pattern(n);
  // number_spiral(n);

  return 0;
}
