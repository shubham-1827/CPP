//cash is withdrawn only if after the withdrawl account has more than 10 % of the initial amount left.

#include <iostream>
using namespace std;

int main (){
    double amount{}, cash_to_withdraw{};

    cout << "Enter the amount and the cash to withdraw: ";
    cin >> amount >> cash_to_withdraw;

   cout << ((amount-cash_to_withdraw) >= (0.1*amount) ? "Yes, You can withdraw " 
   													: "No, You can't withdraw ")
        << cash_to_withdraw << endl;

    return 0;
}
