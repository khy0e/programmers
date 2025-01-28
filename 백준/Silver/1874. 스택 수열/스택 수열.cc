#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num, a;
    stack<int> st;
    vector<char> v; 
    cin >> num;

    int j = 1;

    for (int i = 0; i < num; i++) {
        cin >> a;

        if (!st.empty() && a == st.top()) {
            st.pop();
            v.push_back('-'); 
        }
        else {
            while (j <= a) {
                st.push(j++);
                v.push_back('+'); 
            }

            if (!st.empty() && st.top() == a) {
                st.pop();
                v.push_back('-'); 
            }
            else {
                cout << "NO" << '\n';
                return 0; 
            }
        }
    }

    
    for (char c : v) {
        cout << c << '\n';
    }

    return 0;
}
