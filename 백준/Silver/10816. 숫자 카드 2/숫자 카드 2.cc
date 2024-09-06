#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, a;
	cin >> n;
	map <int, int> m;
	for (int i = 0; i < n; i++) {
		cin >> a;
		m[a]++;
	}

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (m.find(a) == m.end())
			cout <<0<<' ';
		else
			cout << m[a] <<' ';
	}
}