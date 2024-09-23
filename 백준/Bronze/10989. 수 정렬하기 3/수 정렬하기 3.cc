#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	int n,x;
	//vector<int> v;
	map <int, int> m;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		m[x]++;
	}

	for (auto i : m) {
		for(int j=0;j<i.second;j++){
			cout << i.first<<'\n';
		}
	}
}