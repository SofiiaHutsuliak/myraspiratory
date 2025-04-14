#include <iostream>
using namespace std;
float calculator(float a, float b, char operator1) { // Function to perform basic arithmetic operations
    switch (operator1) {        // Switch statement to determine the operation based on the operator input
        case '+': //in case +
            return a + b;
        case '-': //in case -
            return a - b;
        case '*': //in case *
            return a * b;
        case '/':   //in case /
            if (b != 0) {   // Check for division by zero
                return a / b;
            } else {    // If b is zero, print an error message and return 0
                cout << "Error: Division by zero" << endl;
                return 0; 
            }
        default:
            cout << "Invalid operator" << endl;
            return 0;
    }
}
int main() 
{
    cout << "Enter first number: ";     // Prompt user for first number
    float userinput1;
    cin >> userinput1;      // save first number from user input
    cout << "Enter second number: ";    // Prompt user for second number
    float userinput2;
    cin >> userinput2;
    cout << "Enter operator (+, -, *, /): "; // Prompt user for operator
    char operator1;
    cin >> operator1;   
    float result = calculator(userinput1, userinput2, operator1); // Call calculator function with user inputs
    cout << "Result: " << result << endl;   // Print the result of the calculation
    return 0; 
}