#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string s1, result = "";
    getline(cin, s1);

    for(char ch : s1) {
        char l = tolower(ch);
        if(l != 'a' && l != 'e' && l != 'i' && l != 'o' && l != 'u')
            result += ch;
    }

    cout << result << endl;
    return 0;
}
