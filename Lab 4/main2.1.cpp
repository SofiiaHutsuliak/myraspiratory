#include <iostream>
#include <string>
using namespace std;


class Book { // Class to represent a book
private:
    string title; // Title of the book
    int pages; // Number of pages in the book
public:
    Book(string t, int p) : title(t), pages(p) {
        cout << "Constructor: \"" << title << "\" with " << pages << " pages\n"; // Constructor to initialize book details
    }
    ~Book() {
        cout << "Destructor: \"" << title << "\" destroyed." << endl; // Destructor to indicate when a book is destroyed
    }
    void display() const { // Method to display book details
        cout << "Title: " << title << ", Pages: " << pages << endl; // Output the title and number of pages
    }
};

int main() {
    // Create an array of 3 Book objects
    Book library[3] = {
        Book("C++ Fundamentals", 300),
        Book("Data Structures", 450),
        Book("Algorithms", 500)
    };

    cout << "\n--- Library Contents ---\n";
    for (int i = 0; i < 3; ++i) {
        library[i].display();
    }

    cout << "\n--- End of Program ---\n";
    return 0;
}
