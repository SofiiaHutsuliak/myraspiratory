#include <iostream>
using namespace std;

int main() 
{
    while (1) // Infinite loop to keep asking for input
    {
        cout << "Please provide a number" << endl; // Prompt the user for input
        int number;
        cin >> number;
        if (number < 0) //if number is neg
        {
            break; //exit loop
        }
        else if (number == 0)  //if number is pos
        {
            continue;
        } 
        else
        {
            int b = number * number; // Calculate the square of the number
            cout << "The square of the number is: " << b << endl;
        } 
    }
    return 0;
    
}