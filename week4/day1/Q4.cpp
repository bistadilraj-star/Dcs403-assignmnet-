#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int p = -1;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            p = i;  
            break; 
        }
    }

    if (p == -1)
        cout << "Element not found." << endl;
    else
        cout << "Element found at index " << p << endl;

    return 0;
}
