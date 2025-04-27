#include <iostream>
using namespace std;

class Vehicle // Base class
{
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y) // Constructor with parameters 
    {
        brand = b;
        year = y;
    }

    virtual void showInfo() // Prints vehicle info
    {
        cout << "Brand: " << brand << " Year: " << year << endl;
    }

    virtual void startEngine() // Starts the engine
    {
        cout << "Starting engine of Vehicle" << endl;
    }

    virtual ~Vehicle() // Destructor
    {
    }
};

class Car : public Vehicle // Derived class from Vehicle
{
private:
    int numDoors;

public:
    Car(string b, int y, int doors) : Vehicle(b, y)  //
    {
        numDoors = doors;
    }

    void showInfo() override // Override showInfo method
    {
        cout << "Brand: " << brand << " Year: " << year << " Doors: " << numDoors << endl;
    }

    void startEngine() override // Override startEngine method
    {
        cout << "Car engine is starting!" << endl;
    }

protected:
    int getNumDoors() const 
    { return numDoors; 
    }
};
class ElectricCar : public Car  // Derived class from Car
{
private:
    int batteryCapacity;

public:
    ElectricCar() : Car("Unknown", 0, 0) //default constructor
    {
        batteryCapacity = 0;
    }

    ElectricCar(string b, int y, int doors, int capacity) : Car(b, y, doors) // constructor with parameters
    {
        batteryCapacity = capacity;
    }

    void showInfo() override // Override showInfo method
    {
        cout << "Brand: " << brand << " Year: " << year
             << " Doors: " << getNumDoors() << " Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }

    void startEngine() override  // Override startEngine method
    {
        cout << "Electric engine is starting... Silent but powerful!" << endl;
    }
};

int main() 
{
    Vehicle* vehicle = new Vehicle("Tesla", 2020); // Create a Vehicle object on the heap using new
    vehicle->showInfo();
    vehicle->startEngine();
    Car* car = new Car("Toyota", 2020, 4); // Create a Car object on the heap using new
    car->showInfo();
    car->startEngine();

    ElectricCar* electricCarDefault = new ElectricCar();  // Create an ElectricCar object using the default constructor
    electricCarDefault->showInfo();
    electricCarDefault->startEngine();
    ElectricCar* electricCar2 = new ElectricCar("Tesla", 2021, 4, 100); // Create another ElectricCar object on the heap using new
    electricCar2->showInfo();
    electricCar2->startEngine();
    delete vehicle; // Delete the Vehicle object, calling the destructor
    delete car;
    delete electricCarDefault;
    delete electricCar2;
    return 0;
}
