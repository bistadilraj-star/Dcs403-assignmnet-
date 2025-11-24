#include <iostream>
using namespace std;

int main()
{
    int n, e;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements in sorted order:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> e;

    int low = 0, high = n - 1;
    int pos = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == e)
        {
            pos = mid;
            break;
        }
        else if (arr[mid] < e)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (pos == -1)
        cout << "Element not found." << endl;
    else
        cout << "Element found at index " << pos << endl;

    return 0;
}
