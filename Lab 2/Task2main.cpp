#include <iostream>
using namespace std;
void swap(float a, float b) // Function to swap two numbers using normal method
{
    float value = a;      // Store the value of a in a temporary variable
    a = b; // Assign the value of b to a
    b = value; // Assign the value of the temporary variable to b
    cout << "Normal swap: a = " << a << ", b = " << b << endl;  // Print the swapped values
}
void swapUsingPointers(int * a, int* b) // Function to swap two numbers using pointers
{
    int value = *a; 
    *a = *b;
    *b = value;
}
void swapUsingReferences(int & a, int & b) // Function to swap two numbers using references
{
    int value = a;
    a = b;
    b = value;
}
int main() 
{
    float a = 5.0, b = 10.0;
    cout << "Numbers: a = " << a << ", b = " << b << endl;
    swap(a, b); // Call the normal swap function
    int x = 5, y = 10;
    swapUsingPointers(&x, &y); // Call the swap function using pointers
    cout << "Swap using pointers: a = " << x << ", b = " << y << endl;
    x = 5;// Reset x to 5
    y = 10; // Reset y to 10
    swapUsingReferences(x, y); // Call the swap function using references
    cout << "Swap using references: a = " << x << ", b = " << y << endl;
    return 0;
}