#include <iostream>
#include <string>

using namespace std;

class Car { // Class to represent a car
public:
    string modelName;
    int year;
    double price;

    Car(string m = "Unknown", int y= 2000, double p = 0.0) { // Default constructor to initialize car details
        modelName = m;
        year = y;
        price = p;
        cout << "Car constructor: " << modelName << " created." << endl; // Constructor to initialize car details)
    }

    ~Car() {
        cout << "Car destructor: Model " << modelName << " destroyed " << endl; // Destructor to indicate when a car is destroyed
    }

    void display() const {
        cout << "Model: " << modelName << ", Year: " << year << ", Price: $" << price << endl;  // Method to display car details
    }
};
class CarCollection {
private:
    Car* cars;  // Pointer to dynamically allocated array of cars
    int size;  

public:
    CarCollection(int n) { // Constructor to initialize the car collection
        size = n;
        cars = new Car[size];
        for (int i = 0; i < size; i++) {
            string model;
            int year;
            double price;

            cout << "Enter model for car " << i + 1 << endl; // Prompt user for car details
            cin.ignore();   // Clear the input buffer
            getline(cin, model);    // Read the model name
            cout << "Enter year: ";
            cin >> year;
            cout << "Enter price: ";
            cin >> price;

            cars[i] = Car(model, year, price); // Create a new car object and store it in the array
        }
    }
    ~CarCollection() {  // Destructor to clean up the car collection
        delete[] cars; 
        cout << "CarCollection destroyed." << endl;
    }
    void displayCars() const {  // Method to display all cars in the collection
        cout << "All cars in the collection:" << endl;
        for (int i = 0; i < size; i++) {
            cars[i].display();
        }
    }
};

int main() {
    int numCars;
    cout << "How many cars do you want to enter? ";
    cin >> numCars; // Prompt user for the number of cars
    CarCollection carCollection(numCars); // Create a car collection with the specified number of cars
    carCollection.displayCars(); // Display all cars in the collection
    return 0;
}
