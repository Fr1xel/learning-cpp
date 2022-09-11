#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int sales = 95000;
    const int stateTax = 4;
    const int stateTaxMoney = sales * (stateTax / 100);
    const int countyTax = 2;
    const int countyTaxMoney = sales * (countyTax / 100);
    const int allTax = stateTax + countyTax;
    const int allTaxMoney = sales * (allTax / 100);
    cout << "Sales = $" << sales << endl
        << "State Tax = " << stateTax << "%" << " = " << stateTaxMoney << endl
        << "County Tax = " << countyTax << "%" << " = " << countyTaxMoney << endl
        << "Total Tax = " << allTax << "%" << " = " << allTaxMoney << endl;

    cout << "Convert fahrenheit into celsius: ";
    double fahrenheit;
    cin >> fahrenheit;
    const double celsious = (fahrenheit - 32) * (.5556);
    cout << fahrenheit << " this many fahrenheit is equivelent to: " << celsious << " celsious" << endl;

    const double pi = 3.14;
    double radious {};
    cout << "Enter a radious of your circle :";
    cin >> radious;
    double radiousSquared = pow(radious, 2);
    double area = pi * radiousSquared;
    cout << area << " is the area of your circle" << endl;

    const int minValue{ 1 };
    const int maxValue{ 6 };
    srand(time(0));
    int diceNumber{ (rand() % (maxValue - minValue)) + 1 };
    cout << "You rolled the dice and got: " << diceNumber;
    return 0;
}
  