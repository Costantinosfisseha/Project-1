#include <iostream>
#include <string>
#include "login.h"
using namespace std;
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
};
