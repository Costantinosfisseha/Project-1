//function to deposit money
#include <iostream>
#include "Deposit.h"
#include "balance.h"
using namespace std;
void Deposit() {//when passing by reference the function works directly on the original data.
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    if (amount <= 0) {//checks if the amount is negative number
        cout << "Invalid amount. Please enter a positive number." << endl;
        return;
    }
    balance += amount; //add the deposit to the balance
    cout << "Deposit successful. New balance: " << balance << endl;
};
