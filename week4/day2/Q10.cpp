#include <iostream>
using namespace std;

void reverseRows(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {          
        for (int j = 0; j < 3 / 2; j++) {     
            int temp = arr[i][j];
            arr[i][j] = arr[i][3 - 1 - j];
            arr[i][3 - 1 - j] = temp;
        }
    }
}

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    reverseRows(matrix, 2);

    cout << "Reversed rows:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
