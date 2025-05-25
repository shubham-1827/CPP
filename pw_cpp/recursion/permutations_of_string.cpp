#include <iostream>
#include <string>
#include <vector>

using namespace std;

// this is the basic recursive solution and it has a very bad space and time complexity
// it has a better solution in backtracking

// how this is working is, we are taking each element from the start in the string and appending it to res recursively
// the number of recursive calls is dependent on the original string length
// pick a (res = a)-> we are left with bc then in next call, pick b(res = ab) -> we are left with c,
// now finally pick c (res = abc) -> we are left with empty string, thats the base case to return
// and thats 1 permutation done, similarly for the others as well
void print_permutations(string s, string res, vector<string> &v) {
  if ( s.size() == 0 ) {
    v.push_back(res);
    return;
  }

  for ( int i = s.size() - 1; i >= 0; i-- ) {
    // in this , we are passing the remaining string s after removing the target character from it
    // we are doing this, by picking up the left substr and right substr of the target character and adding it
    char ch = s[i];
    string left = s.substr(0, i);
    string right = s.substr(i + 1);  // this will take till end
    print_permutations(left + right, res + ch, v);
  }
}

int main() {
  string s;
  cin >> s;

  vector<string> v;

  print_permutations(s, "", v);

  for ( int i = 0; i < v.size(); i++ ) {
    cout << v[i] << " ";
  }
  cout << endl;

  return 0;
}
