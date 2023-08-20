#pragma once
#include <iostream>

using namespace std;

namespace frn
{
    class Fraction
    {
        int numerator;
        int denominator;

    public:

        explicit Fraction(int num = 0, int denom = 1);

        Fraction operator+(const Fraction& object) const;
        Fraction operator-(const Fraction& object) const;
        Fraction operator*(const Fraction& object) const;
        Fraction operator/(const Fraction& object) const;

        void Print() const;
    };
}