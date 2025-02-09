#include <iostream>
#include <vector>
using namespace std;

vector<int> ve[101];
bool visited[101];
int cnt = 0;

void dfs(int x) {
    visited[x] = true;
    for (int i = 0; i < ve[x].size(); i++) {
        int a = ve[x][i];
        if (!visited[a]) {
            dfs(a);
            cnt++;
        }
    }
}
int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        ve[u].push_back(v);
        ve[v].push_back(u);
    }
    dfs(1);
    cout << cnt;
    return 0;
}