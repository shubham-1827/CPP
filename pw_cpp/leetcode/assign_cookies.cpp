#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int i = 0;
    int j = 0;
    int children_satisfied = 0;
    while ( i < g.size() and j < s.size() ) {
      if ( g[i] <= s[j] ) {
        children_satisfied++;
        i++;
        j++;
      }
      else {
        j++;
      }
    }
    return children_satisfied;
  }
};

int main() {
  int m, n;
  cin >> m >> n;

  vector<int> g;
  vector<int> s;

  for ( int i = 0; i < m; i++ ) {
    int x;
    cin >> x;
    g.push_back(x);
  }
  for ( int i = 0; i < n; i++ ) {
    int x;
    cin >> x;
    s.push_back(x);
  }

  Solution ans;
  cout << ans.findContentChildren(g, s) << endl;

  return 0;
}
