#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int n, k, num;
    cin >> n >> k;
    queue <int> q;
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    while (!q.empty()) {
        if (q.size() < k) {
            for (int x = 0; x < k - q.size() - 1; x++) {
                num = q.front();
                q.push(num);
                q.pop();
            }
        }
        else {
            for (int j = 0; j < k - 1; j++) {
                num = q.front();
                q.push(num);
                q.pop();
            }
        }
        v.push_back(q.front());
        q.pop();
    }
    cout << "<";
    for (int i = 0; i < v.size(); i++) {
        if (i != 0) cout << ", ";
        cout << v[i];
    }
    cout << ">" << endl;

    return 0;
}