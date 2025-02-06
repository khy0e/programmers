#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;
    vector<int> v(n + 1);

    v[0] = 0;
    v[1] = 0;
    v[2] = 1;
    v[3] = 1;

    for (int i = 4; i <= n; i++) {
        v[i] = v[i - 1] + 1;
        if (i % 2 == 0) {
            v[i] = min(v[i], v[i / 2] + 1);
        }
        if (i % 3 == 0) {
            v[i] = min(v[i], v[i / 3] + 1);
        }
    }
    cout << v[n];

   
    return 0;
}
