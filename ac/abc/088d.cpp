#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
#define L 51
#define INF 1e5
using namespace std;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};
typedef pair<ll, ll> P;
int H, W;
char maze[L][L];
int d[L][L];

int bfs() {
    queue<P> q;
    for (int y = 0; y < H; y++) {
        for (int x = 0; x < W; x++) {
            d[y][x] = INF;
        }
    }

    q.push(P(0, 0));
    d[0][0] = 0;

    while (!q.empty()) {
        P now = q.front();
        q.pop();

        if (now.first == H - 1 && now.second == W - 1) {
            break;
        }

        for (int i = 0; i < 4; i++) {
            int ny = now.first + dy[i], nx = now.second + dx[i];

            if (0 <= ny && ny < H && 0 <= nx && nx < W && maze[ny][nx] == '.' &&
                d[ny][nx] == INF) {
                q.push(P(ny, nx));
                d[ny][nx] = d[now.first][now.second] + 1;
            }
        }
    }
    return d[H - 1][W - 1];
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> H >> W;
    int dot = 0;
    rep(i, H) {
        rep(j, W) {
            cin >> maze[i][j];
            if (maze[i][j] == '.') {
                dot++;
            }
        }
    }
    int len = bfs();
    if (len == INF) {
        cout << -1 << endl;
        return 0;
    } else {
        cout << dot - len - 1 << endl;
    }
    return 0;
}