#include <iostream>
#include <string>
using namespace std;

int main() {
    string ss1, ss2;
    getline(cin, ss1);
    getline(cin, ss2);

    string result = ss1 + ss2;

    cout << result << endl;
    return 0;
}
