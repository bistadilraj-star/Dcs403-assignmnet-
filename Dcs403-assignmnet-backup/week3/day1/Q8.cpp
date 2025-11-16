#include <iostream>
using namespace std;

int main()
{
    int r;
    cout << "Enter number of rows you want to make for floyd's traiangle : ";
    cin >> r;

    int num = 1;
    for (int i = 1; i <= r; i++)
    {
    
            for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}
