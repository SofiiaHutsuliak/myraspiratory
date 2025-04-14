#include <iostream>
#include <string>
#include "MathOperations.h" //header file containing mathoperations namespace
#include "TextOperations.h" //header file containing textoperations namespace
using namespace std;

int main() 
{
    int num1 = 2, num2 = 11; // initializing 2 numbers
    cout << MathOperations::add(num1, num2)<< endl;  //calling mathoperations namespace to count sum and printing result
    string sta = "aa", stb = "bb"; //initializing 2 strings
    cout << TextOperations::concat(sta, stb)<< endl; //calling textoperations namespace to count sum and printing result
    return 0;
}
