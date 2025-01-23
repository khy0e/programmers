#include <map>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n,a,sum=0, max=0;
	cin >> n;
	vector<int> v,v2;
	map <int, int> m;
	
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
		m[a]++;
		sum += a;
	}
	sort(v.begin(), v.end());
	cout << floor((double)sum / n + 0.5) << '\n';
	cout << v[v.size() / 2] << '\n';

	for (auto it = m.begin(); it != m.end(); it++) {
		if (it->second > max) {
			max = it->second;
			v2.clear();  
			v2.push_back(it->first); 
		}
		else if (it->second == max) {
			v2.push_back(it->first); 
		}
	}

	if (v2.size() > 1) {
		sort(v2.begin(), v2.end());
		cout << v2[1] << '\n';
	}
	else {
		cout << v2[0] << '\n';
	}

	cout << v[n - 1]- v[0];

	return 0;
	
}