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
    for (; a1>0; a1/=10)
    {
        a2 = a2*10 + a1%10; //reversing the number
    }
    cout << "Reversed number is: " << a2 << endl; //printing the reversed number
    return 0;
}