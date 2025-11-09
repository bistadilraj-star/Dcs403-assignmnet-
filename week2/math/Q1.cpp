#include <iostream>
#include <cmath>   // for sqrt() and pow()

using namespace std;

int main() {
    float x1, y1, x2, y2;

    // Input coordinates
    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;

    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;

    // Calculate distance
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output result
    cout << "The distance between the two points is: " << distance << endl;

    return 0;
}
