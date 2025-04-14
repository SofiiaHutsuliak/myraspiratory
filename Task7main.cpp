#include <iostream>
using namespace std;

int main() {
    int x = 100;
    int* p1 = &x; // Pointer 1 points to x
    int* p2 = p1; // Pointer 2 copies address (shallow copy)
    p1 = nullptr; // Pointer 1 is set to nullptr
    cout << "Value of x: " << x << endl; 
    cout << "Pointer 1: " << p1 << endl; // Output: Pointer 1
    cout << "Pointer 2: " << p2 << endl; // Output: Pointer 2
    return 0;
}