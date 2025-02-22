#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,num=0;
    string s;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        stack<char> st;
        for (int j = 0; j < s.length(); j++) {
           
            if (st.empty() || st.top() != s[j]) {
                st.push(s[j]);
            }
            else {
                st.pop();
            }

        }
        if (st.empty())
            num++;
    }
    cout << num;

    return 0;
}