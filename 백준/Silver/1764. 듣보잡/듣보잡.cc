#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
	int i, j,num=0;
	string name;
	map <string, int> m;
	vector<string> v;
	cin >> i;
	cin >> j;

	for (int k = 0; k < i; k++) {
		cin >> name;
		m[name]++;
	}
	for (int k = 0; k < j; k++) {
		cin >> name;
		m[name]++;
	}
	for (auto it = m.begin(); it != m.end(); it++) {
		if ((it->second) == 2) {
			num++;
			v.push_back(it->first);
		}
	}
	cout << num << '\n';

	// 중복된 이름 출력
	for (const auto& name : v) {
		cout << name << '\n';
	}
	return 0;
}