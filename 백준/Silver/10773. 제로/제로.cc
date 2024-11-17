#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(void) {
	vector<int> v;
	int num, n, sum;

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> n;
		if (n == 0) {
			v.pop_back();
		}
		else {
			v.push_back(n);
		}
	}
	sum = accumulate(v.begin(), v.end(), 0);
	cout << sum;

	return 0;
}