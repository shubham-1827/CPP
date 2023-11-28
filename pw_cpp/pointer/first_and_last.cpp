#include <iostream>
using namespace std;

void find_first_last(int n, int *ptr1, int *ptr2) // pass by reference using pointers
{
    *ptr2 = n % 10; // last digit

    while (n > 9)
    {
        n /= 10; // remove last digit
    }

    *ptr1 = n; // first digit
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int first_digit, last_digit;
    int *first_ptr = &first_digit, *last_ptr = &last_digit;

    find_first_last(n, first_ptr, last_ptr);

    cout << "\nFirst digit of the number is: " << first_digit;
    cout << "\nLast digit of the number is: " << last_digit << endl;
}