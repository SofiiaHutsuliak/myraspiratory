#include <iostream>
#include <cmath>
using namespace std;


class Complex { // Class to represent complex numbers
private:
    double real; // Real part of the complex number
    double imag; // Imaginary part of the complex number 
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {} // Constructor to initialize the complex number

    Complex operator+(const Complex& c) const {     // Overload the + operator to add two complex numbers
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(const Complex& c) const {     // Overload the - operator to subtract two complex numbers
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator/(const Complex& c) const { // Overload the / operator to divide two complex numbers
        double denominator = c.real * c.real + c.imag * c.imag;
        return Complex((real * c.real + imag * c.imag) / denominator,
                       (imag * c.real - real * c.imag) / denominator);
    }

    friend ostream& operator<<(ostream& os, const Complex& c) {     // Overload the << operator to output a complex number
        os << c.real;   // Output the real part
        if (c.imag >= 0) // If the imaginary part is positive, add a '+' sign 
            os << '+';
        os << c.imag << 'i'; //  Output the imaginary part with 'i'
        return os;
    }
};

int main() {
    Complex c1(4, 5), c2(2, -3);
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "Sum = " << c1 + c2 << endl;
    cout << "Difference = " << c1 - c2 << endl;
    cout << "Quotient = " << c1 / c2 << endl;
    return 0;
   }