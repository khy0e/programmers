#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string binary(int n);

vector<int> solution(string s) {
    vector<int> v;
    vector<int> a;
    int cnt = 0, zcnt = 0;
    while (s != "1") {
        v.clear(); 
        for(int i=0;i<s.size();i++){
            if (s[i] == '1')
                v.push_back(1);
            else{
                zcnt++;
            }
        }
        int n = v.size();
        s = binary(n);  
        cnt++;
    }
    //cout << cnt << ',' << zcnt;
    a.push_back(cnt);
    a.push_back(zcnt);
    return a;
}

string binary(int n) {
    string binary = "";

    while (n > 0) {
        binary += to_string(n % 2);
        n /= 2;
    }

    reverse(binary.begin(), binary.end());

    return binary;
}