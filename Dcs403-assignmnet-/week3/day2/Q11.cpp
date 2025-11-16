#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, futureValue;
    int years;

    cout << "Enter initial investment amount: ";
    cin >> principal;

    cout << "Enter annual interest rate (e.g., 0.10 for 10%): ";
    cin >> rate;

    cout << "Enter number of years: ";
    cin >> years;

    futureValue = principal * pow(1 + rate, years);

    cout << "Future Investment Value = " << futureValue;

    return 0;
}
