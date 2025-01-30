#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num, a, answer=0;
    vector<int> v; 
    cin >> num;

    if (num == 0) {
        cout << 0;
        return 0;
    }

    for (int i = 0; i < num; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    int tm = round(num * 0.15);

    for (int i = tm; i < num - tm; i++) {
        answer += v[i];
    }
    answer = round(static_cast<double>(answer) / (num - 2 * tm));
    cout << answer;

    return 0;
}
