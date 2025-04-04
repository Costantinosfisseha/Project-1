//function to withdraw money
#include <iostream>
#include "Withdrwal.h"
#include "balance.h"

using namespace std;
void Withdrawal() { //pass by reference: Any changes made to the parameter inside the function will directly modify the original variable outside the function.
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if (amount <= 0) {// make sure AMOUNT is not negative
        cout << "Invalid amount. Please enter a positive number." << endl;
        return;
    }
    if (amount > balance) { //check if the balance is less than the withdrawal amount
        cout << "Insufficient balance!" << endl;
    }
    else {
        balance -= amount; //subtract the withdrawal amount from the balance
        cout << "Withdrawal successful. New balance: " << balance << endl;
    }
};
