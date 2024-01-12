#include <iostream>
using namespace std;
int main()
{
  int test = 0;
  cout << "First character " << '1' << endl;
  cout << "Second character " << (test ? 3 : '1') << endl; // ternary operator returns the highest priority data type among the both
  // in this case int is at the highest priority in int and char
  return 0;
}

// output : first character 1
//          second character 49