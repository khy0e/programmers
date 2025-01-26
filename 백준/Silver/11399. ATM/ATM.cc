#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;

int main() {
	vector<int> v;
	int num, num2, sum=0, sum2=0;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> num2;
		v.push_back(num2);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < num; i++) {
		sum += v[i];
		sum2 += sum;
	}
	cout << sum2;
	return 0;
}