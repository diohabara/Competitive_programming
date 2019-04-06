#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};
#define MAX 100
int cnt = 0;
int n, m;
vector<int> graph[100];
bool used[100] = {};
bool flag;
void dfs(int cur, int past) {
    for (auto next : graph[cur]) {
        // pastとnextが同じ時は次の要素に進む
        if (next == past) {
            continue;
        }
        // nextを通ったことがあるのならflagはfalse
        if (used[next]) {
            flag = false;
        } else {
            used[next] = true;
            dfs(next, cur);
        }
    }
    return;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        // u->vに進む
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        // 無向グラフなので両方向に辺を伸ばす
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int i = 0; i < n; i++) {
        if (used[i] == false) {
            flag = true;
            dfs(i, -1);
            if (flag) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}