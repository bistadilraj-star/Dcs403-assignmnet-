#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);  

    int freq[26] = {0}; 

    for (char c : input) {
        if (isalpha(c)) { 
            c = tolower(c); 
            freq[c - 'a']++; 
        }
    }


    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }

    return 0;
}
