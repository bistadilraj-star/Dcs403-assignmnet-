#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, output = "";
    cout << "Enter a string: ";
    getline(cin, input);

    for (char c : input) {
        if (isalpha(c)) { 
            output += c;   
        }
    }

    cout << "String after removing non-alphabetic characters: " << output << endl;
    return 0;
}
