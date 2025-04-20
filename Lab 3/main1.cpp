#include <iostream>
#include <cmath>
using namespace std;
class Book // class definition
{
private: // private members
    string title;
   int pages; 
    string author="Pether"; // default value for author
protected: // protected members
    float price;
public: // public members
    string publisher;
void displayAuthorInfo() // prints info
    {
        cout << "Author: " << author << endl;
    }
};  

int main() 
{
   Book book1; // Create an object of the Book class
    book1.displayAuthorInfo();  // prints author info using method
    return 0;
}