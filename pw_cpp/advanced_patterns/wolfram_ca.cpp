#include <iostream>
#include <vector>

using namespace std;

void print_row(const vector<int>& row, int size) {
  for ( int space = 0; space < size - row.size() / 2; ++space ) cout << " ";

  for ( int bit : row ) cout << (bit ? "* " : "  ");

  cout << "\n";
}

int main() {
  int rows = 32;  // Must be power of 2 for full triangle

  // Initial state (single 1 in the center)
  vector<int> row(2 * rows + 1, 0);
  row[rows] = 1;

  for ( int i = 0; i < rows; ++i ) {
    print_row(row, rows);

    vector<int> next(row.size(), 0);
    for ( int j = 1; j < row.size() - 1; ++j ) {
      // Rule 90: left XOR right
      next[j] = row[j - 1] ^ row[j + 1];
    }

    row = next;
  }

  return 0;
}
