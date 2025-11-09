#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    double a, b, c;
    double D, root1, root2, realPart, imagPart;

    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    D = (b * b) - (4 * a * c);

    cout << "\nDiscriminant (D) = " << D << endl;

    if (D > 0) {

        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (D == 0) {
    
        root1 = root2 = -b / (2 * a);

        cout << "Roots are real and equal." << endl;
        cout << "Root 1 = Root 2 = " << root1 << endl;
    }
    else {
        
        realPart = -b / (2 * a);
        imagPart = sqrt(-D) / (2 * a);

        cout << "Roots are imaginary and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
