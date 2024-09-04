#include<iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
   
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    
	int n, a;
	cin >> n;
	//vector <int> v2;
	set<int> s1;

	for (int i = 0; i < n; i++) {
		cin >> a;
		s1.insert(a);
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		//v2.push_back(a);
		if (s1.find(a) == s1.end()) {
			cout << false << '\n';
		}
		else {
			cout << true << '\n';
		}
	}
}