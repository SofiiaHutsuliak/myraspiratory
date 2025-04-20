#include <iostream>
using namespace std;
class Car // class definition
{
private:
    string brand;
    int year;
public:
Car(string b, int y) // constructor with parameters
    {
        brand = b;
        year = y;
        cout << "Car " << brand << " from year " << year << " created." << endl;
    }
~Car() // destructor
    {
        cout << "Car " << brand << " destroyed." << endl;
    }
void showInfo() // prints car info
    {
        cout << "Brand: " << brand;
        cout << " Year: " << year << endl;
    }
};
int main() 
{
    Car* car1 = new Car("Toyota", 2020); //Use the constructor to create a car object on the heap using new
    car1->showInfo(); // prints car info using method
    delete car1; // deletes the car object, calling the destructor
    return 0;
}