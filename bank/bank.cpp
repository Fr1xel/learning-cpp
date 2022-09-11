#include <iostream>

using namespace std;

int main()
{
    const int sales = 95000;
    const double stateTax = 4;
    const int stateTaxMoney = sales * (stateTax / 100);
    const double countyTax = 2;
    const int countyTaxMoney = sales * (countyTax / 100);
    const double allTax = stateTax + countyTax;
    const int allTaxMoney = sales * (allTax / 100);
    cout << "Sales = $" << sales << endl
        << "State Tax = " << stateTax << "%" << " = " << stateTaxMoney << endl
        << "County Tax = " << countyTax << "%" << " = " << countyTaxMoney << endl
        << "Total Tax = " << allTax << "%" << " = " << allTaxMoney;
    return 0;
}
  