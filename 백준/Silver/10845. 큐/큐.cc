#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	string s, s1, s2;
	queue<int> q;

	for (int i = 0; i < n + 1; i++) {
		getline(cin, s);
		if (s.find(" ") != string::npos) {
			int idx = s.find(" ");
			s1 = s.substr(0, idx);
			s2 = s.substr(idx + 1, s.length());

			int num = stoi(s2);

			q.push(num);
		}
		else {
			if (s == "front") {
				if (q.empty())
					cout << -1 << '\n';
				else
					cout << q.front() << '\n';
			}
			if (s == "back") {
				if (q.empty())
					cout << -1 << '\n';
				else
					cout << q.back() << '\n';
			}
			if (s == "size")
				cout << q.size() << '\n';
			if (s == "pop") {
				if (q.empty())
					cout << -1 << '\n';
				else {
					cout << q.front() << '\n';
					q.pop();
				}
			}
			if (s == "empty") {
				cout << q.empty() << '\n';
			}
		}
	}
}