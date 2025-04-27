#include <iostream>
#include <cmath>
using namespace std;
class Student // class definition
{
private:
    string name;
    int age;
    char grade;
    string group="2025 group";
public:
void setName(string n) // setter for name
    {
        name = n;
    }
void setAge(int a) // setter for age
    {
        age = a;
    }
void setGrade(char g) // setter for grade
    {
        grade = g;
    }
string getName() // getter for name
    {
        return name;
    }
int getAge() // getter for age
    {
        return age;
    }
char getGrade() // getter for grade
    {
        return grade;
    }
void displayInfo() //prints info using getters
    {
        cout << "Name: " << getName();
        cout << " Age: " << getAge();
        cout << " Grade: " << getGrade();
        cout << " Group: " << group; // prints group info
    }
 
};
int main() 
{
    Student student1;   // Create an object of the Student class
    student1.setName("Sofiia");
    student1.setAge(19);
    student1.setGrade('A');
    cout << "Name: " << student1.getName() << endl; //prints name using getter
    cout << "Age: " << student1.getAge() << endl; //prints age using getter
    cout << "Grade: " << student1.getGrade() << endl; //prints grade using getter
    student1.displayInfo(); //prints info using getters
    return 0;
}