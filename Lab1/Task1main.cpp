#include <iostream>
#include <string>
#include "MathOperations.h"
#include "TextOperations.h"
using namespace std;

int main() 
{
    int num1 = 5, num2 = 10;
    cout << MathOperations::add(num1, num2)<< endl;
    string sta = "aa", stb = "bb";
    cout << TextOperations::concat(sta, stb)<< endl;
    return 0;
}