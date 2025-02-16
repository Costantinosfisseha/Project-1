#include <iostream>
#include <string>//to use String 

using namespace std;

// Function to check balance
double CheckBalance(double balance) {
    return balance;
}

//function to deposit money
void Deposit(double& balance) {//when passing by reference the function works directly on the original data.
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    if (amount <= 0) {//checks if the amount is negative number
        cout << "Invalid amount. Please enter a positive number." << endl;
        return;
    }
    balance += amount; //add the deposit to the balance
    cout << "Deposit successful. New balance: " << balance << endl;
}

//function to withdraw money
void Withdrawal(double& balance) { //pass by reference: Any changes made to the parameter inside the function will directly modify the original variable outside the function.
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
}

//function to login
bool Login() {//Reason for using bool is, it easy because we just check if the username is correct return  true and if not return false
    string username = "Costa1234", password = "123456";
    string U_username, U_password;//is what the user will input his user name

    int Attempt = 3;
    int Userattempt = 0;// beacuse we neeed to give three attempts for the user to put his username and password
    //prompt the user for input
    while (Userattempt < Attempt) {
        cout << "Login page" << endl;
        cout << "Enter username: ";
        cin >> U_username;
        cout << "Enter password: ";
        cin >> U_password;
        Userattempt++;

        if (username == U_username && password == U_password) {//check if what the user enter is match to the actually Username and password
            cout << "Login Successful!!" << endl;
            return true; // Return true if credentials match
        }
        else {
            cout << "Invalid username or password. Access denied! Try again." << endl;
        }
    }
    //After you have more than 3 attempts
    cout << "You have exceeded the maximum number of attempts. Access denied!" << endl;
    return false;
}

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