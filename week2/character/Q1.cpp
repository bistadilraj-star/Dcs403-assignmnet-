#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (isalpha(ch)) cout << "Letter";
    else if (isdigit(ch)) cout << "Digit";
    else if (ispunct(ch)) cout << "Special Character";
    else cout << "Other";

    return 0;
}
