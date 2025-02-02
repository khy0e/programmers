#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() {


    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
	cin.ignore();
    string s1, s2, s3;
    queue<int> q;

    for (int i = 0; i < n; i++) {
        getline(cin, s1);
        if (s1.find(" ") != string::npos) {
            int idx = s1.find(" ");
            s2 = s1.substr(0, idx);
            s2 = s1.substr(idx + 1, s1.length());

            int num = stoi(s2);
            q.push(num);
        }
        else {
			if (s1 == "front") {
				if (q.empty())
					cout << -1 << '\n';
				else
					cout << q.front() << '\n';
			}
			if (s1 == "back") {
				if (q.empty())
					cout << -1 << '\n';
				else
					cout << q.back() << '\n';
			}
			if (s1 == "size")
				cout << q.size() << '\n';
			if (s1 == "pop") {
				if (q.empty())
					cout << -1 << '\n';
				else {
					cout << q.front() << '\n';
					q.pop();
				}
			}
			if (s1 == "empty") {
				cout << q.empty() << '\n';
			}
        }
    }

    return 0;
}
