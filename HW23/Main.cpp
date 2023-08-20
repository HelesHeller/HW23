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
    cout << "Сума = ";
    f.Print();

    f = f1 - f2;
    cout << "Різниця = ";
    f.Print();

    f = f1 * f2;
    cout << "Добуток = ";
    f.Print();

    f = f1 / f2;
    cout << "Ділення = ";
    f.Print();





    Complex c;
    Complex c1(2.0, 3.0);
    Complex c2(1.0, -2.0);

    c = c1 + c2;
    cout << "Сума = ";
    c.Print();

    c = c1 - c2;
    cout << "Різниця = ";
    c.Print();

    c = c1 * c2;
    cout << "Добуток = ";
    c.Print();

    c = c1 / c2;
    cout << "Ділення = ";
    c.Print();



    return 0;
}
