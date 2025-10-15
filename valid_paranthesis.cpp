#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '{' || s[i] == '[' || s[i] == '(') {
            st.push(s[i]);
        } else if(s[i] == '}' || s[i] == ']' || s[i] == ')') {
            if(st.empty()) {
                cout << "NO" << endl;
                return 0;
            }
            char top = st.top();
            st.pop();
            if((top == '{' && s[i] != '}') ||
               (top == '[' && s[i] != ']') ||
               (top == '(' && s[i] != ')')) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    if(st.empty()) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
