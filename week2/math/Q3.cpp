#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    double n1, n2;

    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    double large = fmax(n1, n2);
    double smalle = fmin(n1, n2);


    cout << "\n--- Comparison Results ---" << endl;
    cout << "Largest number = " << large << endl;
    cout << "Smallest number = " << smalle << endl;

    return 0;
}
