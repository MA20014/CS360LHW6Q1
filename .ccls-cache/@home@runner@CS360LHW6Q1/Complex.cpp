// Complex.cpp
#include "Complex.h"

Complex::Complex(double realPart, double imaginaryPart) : real(realPart), imaginary(imaginaryPart) {}

Complex Complex::operator+(const Complex& operand2) const {
    return Complex(real + operand2.real, imaginary + operand2.imaginary);
}

Complex Complex::operator-(const Complex& operand2) const {
    return Complex(real - operand2.real, imaginary - operand2.imaginary);
}

Complex Complex::operator*(const Complex& operand2) const {
    double resultReal = real * operand2.real - imaginary * operand2.imaginary;
    double resultImaginary = real * operand2.imaginary + imaginary * operand2.real;
    return Complex(resultReal, resultImaginary);
}

bool Complex::operator==(const Complex& operand2) const {
    return (real == operand2.real) && (imaginary == operand2.imaginary);
}

bool Complex::operator!=(const Complex& operand2) const {
    return !(*this == operand2);
}

std::ostream& operator<<(std::ostream& output, const Complex& complex) {
    output << "(" << complex.real << ", " << complex.imaginary << "i)";
    return output;
}

std::istream& operator>>(std::istream& input, Complex& complex) {
    input >> complex.real >> complex.imaginary;
    return input;
}
