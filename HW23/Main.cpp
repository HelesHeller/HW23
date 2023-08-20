#include <iostream>
#include <windows.h>
#include "Fraction.h"
#include "Complex.h"


using namespace std;
using namespace frn;
using namespace cmx;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Fraction f;
    Fraction f1(1, 2);
    Fraction f2(3, 4);

    f = f1 + f2;
    cout << "���� = ";
    f.Print();

    f = f1 - f2;
    cout << "г����� = ";
    f.Print();

    f = f1 * f2;
    cout << "������� = ";
    f.Print();

    f = f1 / f2;
    cout << "ĳ����� = ";
    f.Print();





    Complex c;
    Complex c1(2.0, 3.0);
    Complex c2(1.0, -2.0);

    c = c1 + c2;
    cout << "���� = ";
    c.Print();

    c = c1 - c2;
    cout << "г����� = ";
    c.Print();

    c = c1 * c2;
    cout << "������� = ";
    c.Print();

    c = c1 / c2;
    cout << "ĳ����� = ";
    c.Print();



    return 0;
}
