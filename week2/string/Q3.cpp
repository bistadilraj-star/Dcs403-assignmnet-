#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str, rev;
    getline(cin, str);

    rev = str;                
    reverse(rev.begin(), rev.end());

    if (str == rev)
        cout << "It is a Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;

    return 0;
}
