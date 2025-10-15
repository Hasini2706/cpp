#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int maxLen = 1, currentLen = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            currentLen++;
        } else {
            currentLen = 1;
        }
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    cout << maxLen << endl;
    return 0;
}
