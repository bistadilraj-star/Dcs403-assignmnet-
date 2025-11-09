#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int words = 0;
    bool inWord = false;

    for(char ch : s) {
        if(ch != ' ' && !inWord) {
            inWord = true;
            words++;
        }
        else if(ch == ' ') {
            inWord = false;
        }
    }

    cout << words << endl;
    return 0;
}
