#include <iostream>
#include <string>
using namespace std;
struct Student // Structure to store student information
{
    int id;
    char name[50];
    float grade;
};
Student students[100];
int studentnumber = 0; // Global variable to keep track of the number of students
void AddStudent(int id, char name, float grade) // Function to add a student
{
    Student s;
    cout << "Enter student ID: ";
    cin >> s.id;
    cout << "Enter student name: ";
    cin >> s.name;
    cout << "Enter student grade: ";
    cin >> s.grade;
    students[studentnumber++] = s; // Increment the student count
}
void DisplayStudent(Student *s)         // Function to display all students
{
    for (int i = 0; i < studentnumber; i++) //loop through all
    {
        cout << "Student ID: " << s[i].id << endl;
        cout << "Student Name: " << s[i].name << endl;
        cout << "Student Grade: " << s[i].grade << endl;
    }
    
}
void SearchStudent(Student *s, int id)  // Function to search for a student by ID
{
    for (int i = 0; i < studentnumber; i++)
    {
        if (s[i].id == id)      //check if id matches
        {
            cout << "Student ID: " << s[i].id << endl;
            cout << "Student Name: " << s[i].name << endl;
            cout << "Student Grade: " << s[i].grade << endl;
            return;
        }
    }
    cout << "Student not found." << endl;
}
void exitProgram() // Function to exit the program
{
    cout << "Exiting program..." << endl;
    exit(0);    
}
int main()
{
    int choice, id;
    char name;
    float grade;
    while (true) // Infinite loop to keep the program running until the user chooses to exit
    {
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice; // Get user input for the menu choice
        switch (choice) // Switch case to handle different menu options
        {
            case 1:
                AddStudent(id, name, grade); // Call function to add a student
                break;
            case 2:
                DisplayStudent(students); // Call function to display all students
                break;
            case 3:
                cout << "Enter student ID to search: ";
                cin >> id; // Get user input for student ID to search
                SearchStudent(students, id); // Call function to search for a student by ID
                break;
            case 4:
                exitProgram(); // Call function to exit the program
                break;
            default:
                cout << "Invalid choice. Please try again." << endl; // Handle invalid input
        }
    }
    return 0; // Return 0 to indicate successful execution of the program
}