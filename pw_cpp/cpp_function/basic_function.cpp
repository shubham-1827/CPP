#include <iostream>
#include <cmath> // this is used bcz sqrt() function is defined here
// so we need this to use that function

using namespace std;

void star_triangle(int x) // x is argument, void is return type which means function return nothing
{
  for (int i = 1; i <= x; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void greeting()
{
  cout << "Good Morning!!" << endl;
  cout << "How are you ?" << endl;
}

int sum(int a, int b)
{
  return a + b;
}

int mini(int a, int b)
{
  return (a < b) ? a : b;
}

int maximum(int a, int b)
{ // this function will never run because it is never called
  return (a > b) ? a : b;
}

int main()
{

  // importance of functions
  // The importance of a function is that it allows us to perform specific tasks or operations in our program. Functions make the code more
  // in projects we always tend to use same / similar piece of code multiple times, but not always
  // we are looking for continous repetition (loops) matlab jab hame loops ka use nahi karna hota
  // hai repetion of code ko rokne ke liye toh ham functions ka use karte hain

  // function basically means wrapping a piece of code within a name
  /*
  syntax of function :
    <void/int/float> function_name (arguments) {
      function body ...
    }

  arguments are used to give function some inputs
  in the start we write the return type , which means what data type function returns when it ends
    */
  int a, b, c;
  cin >> a >> b >> c;

  greeting();
  star_triangle(a);
  star_triangle(b);
  star_triangle(c);

  cout << sum(a, b) << endl; // as int is return type then we can consider sum(a, b) as an integer
  // matlab sum (a, b) ki jagah per 1 integer aakar dhara jayega

  cout << mini(a, c) << endl; // this is the min function we built
  cout << min(a, c) << endl;  // this is the built in min function

  cout << sqrt(5); // this will find the square root of 5
  return 0;
}