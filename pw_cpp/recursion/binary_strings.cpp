#include <iostream>
#include <vector>

using namespace std;

void binary_strings(int n, int idx, string res, vector<string> &final) {
  if ( idx == n + 1 ) {
    final.push_back(res);
    return;
  }
  // we are selecting 0
  binary_strings(n, idx + 1, res + "0", final);
  // now we are selecting 1 next
  // this if condition stops consequetive ones
  // means if the last character of res string is 1 then dont make the call for selecting 1
  if ( res.empty() or res.back() != '1' ) {
    binary_strings(n, idx + 1, res + "1", final);
  }
}

int main() {
  int n;
  cin >> n;

  vector<string> final;
  binary_strings(n, 1, "", final);
  for ( int i = 0; i < final.size(); i++ ) {
    cout << final[i] << " ";
  }
  cout << endl;

  return 0;
}
