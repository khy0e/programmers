#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	string s, s1, s2;
	stack<int> st;

	for (int i = 0; i < n+1; i++) {
		getline(cin, s);
		if (s.find(" ") != string::npos) {
			int idx = s.find(" ");
			s1 = s.substr(0, idx);
			s2 = s.substr(idx + 1, s.length());

			int num = stoi(s2);

			st.push(num);
		}
		else {
			if (s == "top") {
				if (st.empty())
					cout << -1 << '\n';
				else
					cout << st.top() << '\n';
			}
			if (s == "size")
				cout << st.size() << '\n';
			if (s == "pop") {
				if (st.empty())
					cout << -1<<'\n';
				else {
					cout << st.top() << '\n';
					st.pop();
				}
			}
			if (s == "empty") {
				cout << st.empty() << '\n';
			}
		}
	}
}