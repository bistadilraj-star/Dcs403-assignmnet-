#include <iostream>
using namespace std;

int main()
{
    int r[5];

    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> r[i];
    }

    cout << "You entered:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << r[i] << " ";
    }

    return 0;
}
