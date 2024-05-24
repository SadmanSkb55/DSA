
#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex {
public:
    Complex();
    Complex(double, double);

    Complex operator+(const Complex&) const;
    Complex operator*(const Complex&) const;
    bool operator!=(const Complex&) const;

    void Print() const;

private:
    double Real, Imaginary;
};

#endif // COMPLEX_H_INCLUDED
