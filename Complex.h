// Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
public:
    explicit Complex(double = 0.0, double = 0.0); // constructor
    Complex operator+(const Complex&) const; // addition
    Complex operator-(const Complex&) const; // subtraction
    Complex operator*(const Complex&) const; // multiplication
    bool operator==(const Complex&) const; // equality
    bool operator!=(const Complex&) const; // inequality
    void print() const; // output

private:
    double real; // real part
    double imaginary; // imaginary part
};

#endif // COMPLEX_H
