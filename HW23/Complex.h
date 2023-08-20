#pragma once
#include <iostream>

using namespace std;

namespace cmx
{
    class Complex
    {
        double real;
        double imaginary;

    public:
        explicit Complex(double r = 0.0, double i = 0.0);

        Complex operator+(const Complex& object) const;
        Complex operator-(const Complex& object) const;
        Complex operator*(const Complex& object) const;
        Complex operator/(const Complex& object) const;

        void Print() const;
    };
}