#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;


int main() 
{  
    int a1;
    cout << "Enter a number: "; //asking user for number
    cin >> a1;
    int a2=0;
    int a3=a1; //storing the original number in a3 for later use
    for ( ; a1 > 0; a1/=10) 
    {
        a2+= a1 % 10; //calculating the sum of digits of the number
    }
    cout << "The sum of digits of " << a3 << " is " << a2 << endl; //printing the sum of digits of the number
    
    return 0;
}