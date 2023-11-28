#include <iostream>
using namespace std;

int main()
{
  int a, b;
  char op;
  cout << "Enter your problem : ";
  cin >> a >> op >> b;

  switch (op)
  {
  case '+':
    cout << (a + b);
    break;

  case '-':
    cout << (a - b);
    break;

  case '*':
    cout << (a * b);
    break;

  case '/':
    cout << (a / b);
    break;

  case '%':
    cout << (a % b);
    break;

  default:
    cout << "Please enter a valid operation";
    break;
  }
  cout << endl;

  return 0;
}