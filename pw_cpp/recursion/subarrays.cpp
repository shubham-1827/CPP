#include <iostream>
#include <vector>

using namespace std;

void subarrays(vector<int> &v, vector<int> res, vector<vector<int>> &final_ans,
               int idx) {
  if ( idx == v.size() ) {
    if ( res.size() != 0 ) {
      final_ans.push_back(res);
    }
    return;
  }

  // not selected
  subarrays(v, res, final_ans, idx + 1);
  if ( res.empty() or v[idx - 1] == res.back() ) {
    res.push_back(v[idx]);
    subarrays(v, res, final_ans, idx + 1);
  }
}
void subarrays_using_loops(vector<int> &v) {
  for ( int i = 0; i < v.size(); i++ ) {
    for ( int j = i; j < v.size(); j++ ) {
      for ( int k = i; k <= j; k++ ) {
        cout << v[k] << " ";
      }
      cout << endl;
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> v;
  for ( int i = 0; i < n; i++ ) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  // subarrays_using_loops(v);
  vector<int> res;
  vector<vector<int>> final_ans;

  subarrays(v, res, final_ans, 0);

  for ( int i = 0; i < final_ans.size(); i++ ) {
    for ( int j = 0; j < final_ans[i].size(); j++ ) {
      cout << final_ans[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
