#include <iostream>
using namespace std;


bool isSymmetric(int arr[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] != arr[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix[3][3];

    cout << "Enter a 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    if (isSymmetric(matrix))
        cout << "\nMatrix is Symmetric.\n";
    else
        cout << "\nMatrix is Not Symmetric.\n";

    return 0;
}
