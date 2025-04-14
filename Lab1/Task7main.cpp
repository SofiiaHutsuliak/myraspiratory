#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#define MIN 8 //using a macro to define the minimum length of the password
using namespace std;

int main() 
{  
    string password;
    cout << "Enter a password: "; //asking the user to enter a password
    cin >> password;
    if (password.length() < MIN) { //checking the length of the password
        cout << "Weak Password. Password must be at least 8 characters long." << endl;
        return 1;
    }
    if (password.find_first_of("0123456789") == string::npos) {     //checking if the password contains at least one digit
        cout << "Weak Password. Password must contain at least one digit." << endl;
        return 1;
    }
    if (password.find_first_of("!@#$%^&*") == string::npos) {   //checking if the password contains at least one special character
        cout << "Weak Password. Password must contain at least one special character." << endl;
        return 1;
    }
    if (password.find_first_of("abcdefghijklmnopqrstuvwxyz") == string::npos) { //checking if the password contains at least one lowercase letter
        cout << "Weak Password. Password must contain at least one lowercase letter." << endl;
        return 1;
    }
    if (password.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos) {     //checking if the password contains at least one uppercase letter
        cout << "Weak Password. Password must contain at least one uppercase letter." << endl;
        return 1;
    }
    else {
        cout << "Strong Password" << endl; //if all the conditions are satisfied, printing password is strong
    }
    return 0;
}