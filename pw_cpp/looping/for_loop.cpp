#include <iostream>
using namespace std;

int main() {
  // loops in cpp are used to reduce repetations in code
  // like if you want to do some task multiple times you use a loop
  /*for(initialization statement ; condition ; increment/decrement expression){
      body of the loop , you code goes here which repeats itself
  }

  in for loop initialization takes place only once , then after every
  iteration(it means repetation or round), condition check and
  increment/decrement happens
*/
  for (int i = 1; i <= 10; i++) // you cant use this i(iterator) outside this
                                // for loop if you declare it inside
    cout << "Good Morning" << endl; // if there is only one line inside loop
                                    // then you dont need braces

  int n;
  cin >> n;

  int i; // if you declare it outside and only initialize inside you can now
         // access it from anywhere
  for (i = 1; i <= n; i++) {
    cout << "Hello World" << endl;
  }
  cout << i << endl;

  return 0;
}
