#include<iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	int n;
	cin >> n;
	queue <int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	while (q.size() != 1) {
		q.pop();
		int i = q.front();
		if (q.size() == 1)
			break;
		else {
			q.pop();
			q.push(i);
		}
	}
	cout << q.front();
}