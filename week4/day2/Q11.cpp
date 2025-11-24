#include <iostream>
using namespace std;

int main()
{
    int rows, clums;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> clums;

    int arr[100][100];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < clums; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int col = 0; col < clums; col++)
    {
        int top = 0, bottom = rows - 1;

        while (top < bottom)
        {
            int temp = arr[top][col];
            arr[top][col] = arr[bottom][col];
            arr[bottom][col] = temp;

            top++;
            bottom--;
        }
    }

    cout << "\nMatrix after reversing each column:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < clums; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
