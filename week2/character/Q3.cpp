#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string str;
    int v=0, c=0;
    getline(cin, str);

    for(char ch : str) {
        if(isalpha(ch)) {
            char l = tolower(ch);
            (l=='a'||l=='e'||l=='i'||l=='o'||l=='u') ? v++ : c++;
        }
    }

    cout << "Vowels: " << v << "\nConsonants: " << c << endl;
    return 0;
}
