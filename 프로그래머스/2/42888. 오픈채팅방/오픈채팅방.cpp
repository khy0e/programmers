#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> record) {

	map<string, string> m;
	vector<string> v;

	for (int i = 0; i < record.size(); i++) {
		int idx1 = record[i].find(" ");
		int idx2 = record[i].find(" ", idx1+1);
		string order = record[i].substr(0, idx1);
		string id = record[i].substr(idx1+1, idx2-idx1-1);
		
		if (order == "Enter" || order == "Change") {
			string name = record[i].substr(idx2 + 1, record[i].length());
			m[id] = name;  
		}
	}

	for (int i = 0; i < record.size(); i++) {
		int idx1 = record[i].find(" ");
		int idx2 = record[i].find(" ", idx1 + 1);
		string order = record[i].substr(0, idx1);
		string id = record[i].substr(idx1 + 1, idx2 - idx1 - 1);

		if (order == "Enter") {
			v.push_back(m[id] + "님이 들어왔습니다.");
		}
		else if (order == "Leave") {
			v.push_back(m[id] + "님이 나갔습니다.");
		}
	}
	return v;
}