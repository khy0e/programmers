#include <iostream>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	string input, s1, s2;
	int arr2[20] = { 0, };
	
	for (int i = 0; i < n + 1; i++) {
		getline(cin, input);
		if (input.find(" ") != string::npos) {
			int idx = input.find(" ");
			s1 = input.substr(0, idx);
			s2 = input.substr(idx + 1, input.length());

			int num = stoi(s2);
			if (s1 == "add") {
				arr2[num] = 1;
			}
			if (s1 == "check") {
				if (arr2[num]==1) {
					cout << '1'<<'\n';
					
				}
				else
					cout << '0'<<'\n';
				
			}
			if (s1 == "remove") {
				if (arr2[num]==1) {
					arr2[num]=0;
				}
			}
			if (s1 == "toggle") {
				if (arr2[num] == 1) {
					arr2[num] = 0;
				}
				else
					arr2[num] = 1;
			}

		}
		else {
			if (input == "all") {
				for (int i = 1; i < 21; i++) {
					arr2[i] = 1;
				}
			}
			if (input == "empty") {
				for (int i = 1; i < 21; i++) {
					arr2[i] = 0;
				}
			}

		}
	}
}