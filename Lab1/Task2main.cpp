#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{  
    string str1;
    cout << "Enter a string: ";
    cin >> str1;
    string str2 = str1;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    cout << "Uppercase: " << str1 << endl;
    int vowels = 0;
    for (char c : str1) {
        if (c== 'A' || c=='E' || c=='I' || c=='O' || c== 'U') {
            vowels++;
        }
    }
    cout << "Number of vowels: " << vowels << endl;
    reverse(str2.begin(), str2.end());
    cout << "Reversed string: " << str2 << endl;
    return 0;
}