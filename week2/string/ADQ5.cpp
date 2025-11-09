#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);

    string result = "";
    int n = s1.length();

    for(int i = 0; i < n; i++) {
        int count = 1;
        while(i + 1 < n && s1[i] == s1[i + 1]) {
            count++;
            i++;
        }
        result += s1[i];
        result += to_string(count);
    }

    cout << result << endl;
    return 0;
}
