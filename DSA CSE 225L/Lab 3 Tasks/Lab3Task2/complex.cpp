#include "complex.h"
#include <iostream>
using namespace std;

Complex::Complex() {
    Real = 0;
    Imaginary = 0;
}

Complex::Complex(double r, double i) {
    Real = r;
    Imaginary = i;
}

Complex Complex::operator+(const Complex& a) const {
    Complex t;
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}

Complex Complex::operator*(const Complex& a) const {
    Complex t;
    t.Real = (Real * a.Real) - (Imaginary * a.Imaginary);
    t.Imaginary = (Real * a.Imaginary) + (Imaginary * a.Real);
    return t;
}

bool Complex::operator!=(const Complex& a) const {
    return (Real != a.Real) || (Imaginary != a.Imaginary);
}

void Complex::Print() const {
    cout << Real << endl;
    cout << Imaginary << endl;
}

