#include <iostream>
#include <cmath>
using namespace std;
int multiply(int a, int b) //create a function that takes two integers and returns their product
{
    return a * b;
}
double multiply(double a, double b)  //create a function that takes two doubles and returns their product
{
    return a * b;
}
struct Result //create a struct to hold the result of the multiplication
{
    int intResult;
    double doubleResult;
    bool resultFlag;
};
Result multiply(int a, double b, bool flag)         //create a function that takes an integer, a double, and a boolean flag and returns the product of the two numbers
{
    Result res; 
    double result = a * b; //multiply the two numbers

    res.doubleResult = result; //if flag is false, store the result in doubleResult
    res.intResult = round(result); //if flag is true, round the result and store it in intResult
    return res;

}

int main() 
{
    int num1 = 1, num2 = 10; //create two integers
    int result1 = multiply(num1, num2); //call the function to multiply the two integers
    cout << "The product of " << num1 << " and " << num2 << " is: " << result1 << endl;
    double num3 = 1.5, num4 = 10.5;
    double result2 = multiply(num3, num4); //call the function to multiply the two doubles
    cout << "The product of " << num3 << " and " << num4 << " is: " << result2 << endl;
    bool flag1 = true; //create a boolean flag
    Result res = multiply(num1, num3, flag1); //call the function to multiply an integer and a double with the flag
    if (flag1 == false)         //check if flag is false
    {
        cout << "The product of " << num1 << " and " << num3 << " is: " << res.doubleResult << endl; //if flag is false, print the double result
    } 
    else
    {
        cout << "The product of " << num1 << " and " << num3 << " (rounded) is: " << res.intResult << endl; //if flag is true, print the rounded integer result
    } 
   
    return 0;
}