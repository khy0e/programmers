#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <stack>
#include <map>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, a;
	double n1, n2, answer;
	cin >> n;
	string s;
	cin >> s;
	map<char, int> m;

	stack<double> st;
	
	for (char c : s) {
		if (isalpha(c) && m.find(c) == m.end()) {
			cin >> a;
			m[c] = a;
		}
	}
	for (char c : s) {
		if (isalpha(c)) {
			st.push(m[c]);
		}
		else {
			n1 = st.top();
			st.pop();
			n2 = st.top();
			st.pop();
			switch (c) {
			case'+':
				answer = n2 + n1;
				break;
			case'-':
				answer = n2 - n1;
				break;
			case'*':
				answer = n2 * n1;
				break;
			case'/':
				answer = n2 / n1;
				break;
			
			}
			st.push(answer);
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << st.top();

	return 0;
	
}