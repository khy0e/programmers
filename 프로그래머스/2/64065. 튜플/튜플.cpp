#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;
vector<int> solution(string s) {
    vector<int> answer, a2;
    int n = 0;
    bool progress = false; 


    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            n = n * 10 + (s[i] - '0'); 
            progress = true;
        }
        else if (progress) {
           
            answer.push_back(n);
            n = 0;
            progress = false;
        }
    }

    if (progress) {
        answer.push_back(n);
    }
    map <int, int,greater<int>> m;
    for (int i : answer) {
        m[count(answer.begin(), answer.end(), i)]=i;
    }
    for (auto it : m)
        a2.push_back(it.second);
    return a2;
}