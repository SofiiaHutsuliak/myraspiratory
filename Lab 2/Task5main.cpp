#include <iostream>
using namespace std;

int main() 
{
    int arr1 [7] = {1, 2, 3, 4, 5, 7, 9}; // Declare and initialize an array of integers
    int i=sizeof(arr1) / sizeof(arr1[0]); // Calculate the number of elements in arr1
    cout << "arr1: ";
    for (int o = 0; o < i; o++) // Loop through the array to print its elements
    {
        cout << arr1[o] << " "; // Print each element of arr1
    }
    cout << endl; // Print a new line after printing arr1
    int arr2 [i]; // Declare an array of size i
    int *ptr = &arr1[i - 1]; // Initialize a pointer to the last element of arr1
    for (int j=0; j<i; j++) // Loop through the array to copy elements from arr1 to arr2
    {
        arr2[j] = *ptr; // Dereference the pointer to get the value of the current element
        ptr--; // Move the pointer to the  previous element
    }
    cout << "arr2: ";
    for (int k = 0; k < i; k++) // Loop through arr2 to print its elements
    {
        cout << arr2[k] << " ";
    }
    cout << endl; // Print the elements of arr2
    return 0; 

    
}