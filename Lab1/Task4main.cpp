#include <iostream>
using namespace std;
#define SQUARE(a) (a * a) //defining a macro to calculate the square of a number

int main() 
{  
    int a1;
    cout << "Enter a number: "; //asking user for number
    cin >> a1;
    cout << "The square of " << a1 << " is " << SQUARE(a1) << endl; //printing the square of the number using the macro
    return 0; 
}