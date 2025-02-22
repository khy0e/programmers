#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, answer;
    cin >> n >> m;
    vector<int> v1, v2;

    for (int i = 0; i < m; i++) {
        int num1, num2;
        cin >> num1 >> num2;
        v1.push_back(num1);
        v2.push_back(num2);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    if (n <= 6) {
        answer = min(v1.at(0), v2.at(0)*n);
    }
    else {
        if (n % 6 == 0) {
            answer = min(v1.at(0)*(n/6), v2.at(0) * n);
        }
        else {
            answer = min({ v1.at(0) * (n / 6) + v2.at(0) * (n % 6), v2.at(0) * n,v1.at(0) * ((n / 6)+1) });
        }
    }
    cout << answer;

    return 0;
}