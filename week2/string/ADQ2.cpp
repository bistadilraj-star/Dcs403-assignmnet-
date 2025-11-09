#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);

    string word = "", longest = "";
    for (char ch : s1) {
        if (ch != ' ') {
            word += ch;
        } else {
            if (word.length() > longest.length())
                longest = word;
            word = "";
        }
    }

    if (word.length() > longest.length())
        longest = word;

    cout << longest << endl;
    return 0;
}

