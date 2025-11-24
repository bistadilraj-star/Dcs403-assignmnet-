#include <iostream>
using namespace std;
int main()
{
    int ar[3][3];

    cout << "Enter the value for 3*3matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> ar[i][j];
        }
    }
    cout << "\n\nsum of rows:\n";
    for (int i = 0; i < 3; i++)
    {
        int rsum = 0;

        for (int j = 0; j < 3; j++)
        {
            rsum += ar[i][j];
        }
        cout << rsum << " ";
    }
    cout << "\n\nColumn sums:\n";
    for (int j = 0; j < 3; j++)
    {
        int colSum = 0;
        for (int i = 0; i < 3; i++)
        {
            colSum += ar[i][j];
        }
        cout << colSum << " ";
    }

    return 0;
}