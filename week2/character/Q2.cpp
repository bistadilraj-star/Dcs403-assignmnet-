#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (islower(ch))
        cout << (char)toupper(ch)<< endl;
    else if (isupper(ch))
        cout << (char)tolower(ch)<<endl;
    else
        cout << "Not a letter"<<endl;

    return 0;
}
