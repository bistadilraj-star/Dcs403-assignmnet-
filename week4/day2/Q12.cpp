#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "size of matrix (N): ";
    cin >> n;

    int arr[100][100];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "\nBoundary Elements (Matrix Form):\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << arr[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << "\nBoundary Elements (Single Line): ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << arr[i][j] << " \n";
        }
    }

    return 0;
}
