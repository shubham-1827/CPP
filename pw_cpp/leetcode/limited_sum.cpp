#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    int n = nums.size();
    int m = queries.size();

    // sorting the array
    sort(nums.begin(), nums.end());

    // creating the prefix sum array
    for ( int i = 1; i < n; i++ ) {
      nums[i] = nums[i] + nums[i - 1];
    }

    vector<int> answer;
    for ( int i = 0; i < m; i++ ) {
      // traversing over the queries array and finding the correct length of subsequence
      // using binary search on the prefix array
      int left = 0;
      int right = n - 1;
      int mid;
      int len = 0;
      while ( left <= right ) {
        mid = left + (right - left) / 2;
        if ( nums[mid] <= queries[i] ) {
          left = mid + 1;
          len = mid + 1;
        }
        else {
          right = mid - 1;
        }
      }
      answer.push_back(len);
    }
    return answer;
  }
};

int main() {
  int m, n;
  cin >> n >> m;

  vector<int> nums;
  vector<int> queries;

  for ( int i = 0; i < n; i++ ) {
    int x;
    cin >> x;
    nums.push_back(x);
  }
  for ( int i = 0; i < m; i++ ) {
    int x;
    cin >> x;
    queries.push_back(x);
  }

  Solution s;
  vector<int> answer = s.answerQueries(nums, queries);
  for ( int i = 0; i < answer.size(); i++ ) {
    cout << answer[i] << " ";
  }
  cout << endl;

  return 0;
}
