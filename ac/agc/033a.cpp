#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
int H, W;
vector<string> fi;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // input
    cin >> H >> W;
    fi.resize(H);
    rep(i, H)
    {
        cin >> fi[i];
    }
    // output
    // 多点をスタートとして扱う
    vector<vector<int>> dist(H, vector<int>(W, -1));
    queue<pair<int, int>> que;
    rep(i, H)
    {
        rep(j, W)
        {
            if (fi[i][j] == '#') {
                dist[i][j] = 0;
                que.push(make_pair(i, j));
            }
        }
    }

    // BFS
    while (!que.empty()) {
        auto cur = que.front();
        que.pop();
        rep(dir, 4)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if (nx < 0 || nx >= H || ny < 0 || ny >= W) {
                continue;
            }
            if (dist[nx][ny] == -1) {
                dist[nx][ny] = dist[cur.first][cur.second] + 1;
                que.push(make_pair(nx, ny));
            }
        }
    }
    int res = 0;
    rep(i, H)
    {
        rep(j, W)
        {
            res = max(res, dist[i][j]);
        }
    }
    cout << res << endl;
    return 0;
}