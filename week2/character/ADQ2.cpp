#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        if (isalpha(input[i])) { // Only change letters
            if (i % 2 == 0) {
                input[i] = tolower(input[i]); // Even index -> lowercase
            } else {
                input[i] = toupper(input[i]); // Odd index -> uppercase
            }
        }
    }

    cout << "Modified string: " << input << endl;
    return 0;
}
