#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    
    cout << "Enter numbers required for the 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    
    cout << "\nTranspose matrix is:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
