#include "Complex.h"

using namespace cmx;

Complex::Complex(double r, double i) : real(r), imaginary(i) {}

Complex Complex::operator+(const Complex& object) const {

    double r = real + object.real;
    double i = imaginary + object.imaginary;

    return Complex(r, i);
}

Complex Complex::operator-(const Complex& object) const {

    double r = real - object.real;
    double i = imaginary - object.imaginary;

    return Complex(r, i);
}

Complex Complex::operator*(const Complex& object) const {

    double r = real * object.real - imaginary * object.imaginary;
    double i = real * object.imaginary + imaginary * object.real;

    return Complex(r, i);
}

Complex Complex::operator/(const Complex& object) const {

    double denominator = object.real * object.real + object.imaginary * object.imaginary;
    double r = (real * object.real + imaginary * object.imaginary) / denominator;
    double i = (imaginary * object.real - real * object.imaginary) / denominator;

    return Complex(r, i);
}

void Complex::Print() const {

    cout << real << " + " << imaginary << "i" << endl;
}