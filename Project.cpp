
#include <iostream>
#include <string>//to use String 
#include "CheckBalance.h"
#include "Deposit.h"
#include "Withdrwal.h"
#include "Login.h"
#include "balance.h"

using namespace std;
int main() {
    if (!Login()) {// if the login procees is true or cool
        return 0; // Exit if login fails
    }
    // Welcome message
    cout << "********Hello world**********" << endl;
    cout << "********𝕎𝕖𝕝𝕔𝕠𝕞𝕖 to ℂ𝕠𝕤𝕥𝕒𝔹𝕒𝕟𝕜**********" << endl;

    int choice;
    double balance = 100; // Initial balance
    char continueService = 'y'; // To check if the user wants to continue

    while (continueService == 'y' || continueService == 'Y') {// while the user keep continueService by wrtting y it will keep providing user the menu
        // Display menu options
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "Press: ";
        cin >> choice;
if (cin.fail()) {  
    cin.clear(); // Clear error state
    cin.ignore(10000, '\n'); // Discard invalid input
    cout << "Invalid input! Please enter a number (1-3)." << endl;
    continue; // Restart loop to ask again
}
        // Process user choice
        switch (choice) {
        case 1:
            cout << "Your balance is: " << CheckBalance(balance) << endl;//Call the CheckBalance function
            break;
        case 2:
            Deposit(balance); // Call the deposit function
            break;
        case 3:
            Withdrawal(balance); // Call the withdrawal function
            break;
        default://if the user entered number 4 for example "its Invalid choice"
            cout << "Invalid choice!" << endl;
            break;
        }

        // Ask if the user wants to perform another transaction
        cout << "Do you want to perform another transaction? (y/n): ";
        cin >> continueService;
    }
    //else Goodbye 
    cout << "Thank you for using CostaBank. Goodbye!" << endl;
    return 0;
}
