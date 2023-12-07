#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0));
    int val = rand() % 2;
    cout << (val == 0 ? "HEAD" : "TAIL") << endl;
    return 0;
}