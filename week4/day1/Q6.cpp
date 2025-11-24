#include <iostream>
using namespace std;

int main()
{
    int e;
    cout << "Enter number of elements: ";
    cin >> e;

    int arr[e];
    cout << "Enter " << e << " elements:\e";
    for (int i = 0; i < e; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < e - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < e; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    cout << "Array sorted in ascending order:\e";
    for (int i = 0; i < e; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
