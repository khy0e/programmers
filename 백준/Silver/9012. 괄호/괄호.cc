#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool bk(string s);
int main() {
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (bk(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
bool bk(string s) {
    stack<char> st;
    for (int j = 0; j < s.length(); j++) {
        if (s[j] == '(')
            st.push('(');
        else {
            if (st.empty()) {
                return false;
            }
            else
                st.pop();
        }
    }
    if (st.empty()) {
        return true;
    }
    else {
        return false;
    }
}