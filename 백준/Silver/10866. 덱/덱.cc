#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	string s, s1, s2;
	deque<int> dq;

	for (int i = 0; i < n + 1; i++) {
		getline(cin, s);
		if (s.find(" ") != string::npos) {
			int idx = s.find(" ");
			s1 = s.substr(0, idx);
			s2 = s.substr(idx + 1, s.length());

			int num = stoi(s2);

			if (s1 == "push_front") {
				dq.push_front(num);
			}
			else {
				dq.push_back(num);
			}
		}
		else {
			if (s == "front") {
				if (dq.empty())
					cout << -1 << '\n';
				else
					cout << dq.front() << '\n';
			}
			if (s == "back") {
				if (dq.empty())
					cout << -1 << '\n';
				else {
					cout << dq.back() << '\n';
				}
			}
			if (s == "pop_front") {
				if (dq.empty())
					cout << -1 << '\n';
				else {
					cout << dq.front() << '\n';
					dq.pop_front();
				}
			}
			if (s == "pop_back") {
				if (dq.empty())
					cout << -1 << '\n';
				else {
					cout << dq.back() << '\n';
					dq.pop_back();
				}
			}
			if(s=="size")
				cout << dq.size() << '\n';

			if (s == "empty") {
				cout << dq.empty() << '\n';
			}
		}
	}
}
