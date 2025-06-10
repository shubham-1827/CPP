#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
    // find the loss of satisfaction
    // for example :
    // for the window :
    // 1 3 4
    // 0 1 0
    // the loss of satisfaction is 3 as 3 is not satisfied
    // similarly,
    // 1 7 5
    // 1 0 1
    // loss here is 6 which is more than three so this window is prefered than the above one
    // because here is more loss so if the owner uses the powers of non-grumpiness here it will be more beneficial
    // NOTE loss of satisfaction is not equal to least satisfaction in window
    // for example :
    // 1 2 3   4 5 6
    // 1 0 1   0 1 0
    // in the above cases, the satisfaction in first is 2 and second is 10
    // but loss in first is 4 but in second is 5, so second one will be preffered not first

    int n = customers.size();  // this size is same for grumpy array as well
    int low = 1;
    int high = minutes;
    int loss_of_satis = 0;
    for ( int i = 0; i < minutes; i++ ) {
      if ( grumpy[i] == 1 ) {
        loss_of_satis += customers[i];
      }
    }

    int current_loss = loss_of_satis;
    int max_window_low = 0;
    int max_window_high = minutes - 1;
    while ( high < n ) {
      current_loss = current_loss - (grumpy[low - 1] * customers[low - 1]) +
                     (grumpy[high] * customers[high]);
      if ( current_loss > loss_of_satis ) {
        loss_of_satis = current_loss;
        max_window_low = low;
        max_window_high = high;
      }
      high++;
      low++;
    }

    int satisfied = 0;
    for ( int i = 0; i < n; i++ ) {
      if ( i >= max_window_low and i <= max_window_high ) {
        satisfied += customers[i];
      }
      else if ( grumpy[i] == 0 ) {
        satisfied += customers[i];
      }
    }
    return satisfied;
  }
};

int main() {
  int m;
  cin >> m;
  vector<int> customer;
  vector<int> grumpy;
  for ( int i = 0; i < m; i++ ) {
    int x;
    cin >> x;
    customer.push_back(x);
  }
  for ( int i = 0; i < m; i++ ) {
    int x;
    cin >> x;
    grumpy.push_back(x);
  }
  int minutes;
  cin >> minutes;

  Solution s;
  cout << s.maxSatisfied(customer, grumpy, minutes) << endl;

  return 0;
}
