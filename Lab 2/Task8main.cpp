#include <iostream>
using namespace std;

int main() {
    int a = 100;
    cout << "a: " << a << endl; // Output: a
    int& refA = a; // Reference to a
    refA = 30; // Modifying refA modifies a
    cout << "refA: " << refA << endl; // Output: refA
    cout << "a: " << a << endl; // Output: a
    return 0;
}