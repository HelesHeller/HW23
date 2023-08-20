#include "Fraction.h"

using namespace frn;


Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {}

Fraction Fraction::operator+(const Fraction& object) const {

    int num = numerator * object.denominator + object.numerator * denominator;
    int denom = denominator * object.denominator;

    return Fraction(num, denom);
}

Fraction Fraction::operator-(const Fraction& object) const {

    int num = numerator * object.denominator - object.numerator * denominator;
    int denom = denominator * object.denominator;

    return Fraction(num, denom);
}

Fraction Fraction::operator*(const Fraction& object) const {

    int num = numerator * object.numerator;
    int denom = denominator * object.denominator;

    return Fraction(num, denom);
}

Fraction Fraction::operator/(const Fraction& object) const {

    int num = numerator * object.denominator;
    int denom = denominator * object.numerator;

    return Fraction(num, denom);
}

void Fraction::Print() const {

    cout << numerator << "/" << denominator << endl;
}