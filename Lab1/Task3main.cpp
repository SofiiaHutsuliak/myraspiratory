#include <iostream>
#include <string>
using namespace std;
#define LIMIT 50  // adding macro for limit
int main() 
{  
    for (unsigned short i= 2; i<=LIMIT; i+= 2) //starting loop and using unasigned short for i
    {
        cout << i << " ";// printing even numbers
    }
    return 0;
}