#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of array:";
    cin >> n;
    int ar[n];
    cout << "enter...." << n << "....value!:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int max = ar[0];
    for (int i = 1; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    cout << "The max vaue is:" << max;
    return 0;
}