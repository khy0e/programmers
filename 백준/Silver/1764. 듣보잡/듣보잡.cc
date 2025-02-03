#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n1, n2, num=0;
    string name;
    map<string, int> m;

    cin >> n1 >> n2;
    
    for (int i = 0; i < n1+n2; i++) {
        cin >> name;
        m[name]++;
        if (m[name] == 2) {
            num++;
        }
    }
    cout << num << '\n';

    for (auto it : m) {
        if (it.second == 2) {
            cout << it.first << '\n';
        }
    }
    return 0;
}
