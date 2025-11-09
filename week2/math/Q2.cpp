#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    double angle;
    cout << "Enter an angle in radians: ";
    cin >> angle;

    // Calculate sin, cos, and tangent
    double sineValue = sin(angle);
    double cosineValue = cos(angle);
    double tangentValue = tan(angle);

    //Results//
    cout << "\n--- Trigonometric Results ---" << endl;
    cout << "Sine(" << angle << ") = " << sineValue << endl;
    cout << "Cosine(" << angle << ") = " << cosineValue << endl;
    cout << "Tangent(" << angle << ") = " << tangentValue << endl;

    return 0;
}
