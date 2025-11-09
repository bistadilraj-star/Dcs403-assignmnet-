#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    
    cout << "Enter a string: ";
    getline(cin, str); 
    cout << "Length of the string (using length()): " << str.length() << endl;

    cout << "Length of the string (using size()): " << str.size() << endl;

    return 0;
}
