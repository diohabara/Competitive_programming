#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};
typedef pair<int, int> P;
const int maxR = 51;
#define INF 1e5
char maze[maxR][maxR];
int r, c;
int d[maxR][maxR];
int sy, sx, gy, gx;

// (sy, sx) から (gy, gx)への最短距離を求める
// 辿り着けないとINF
void bfs() {
    queue<P> q;
    // 全ての点をINFで初期化
    for (int y = 0; y < r; y++) {
        for (int x = 0; x < c; x++) {
            d[y][x] = INF;
        }
    }

    // スタート地点をキューに入れ，その地点の距離を0にする
    q.push(P(sy, sx));
    d[sy][sx] = 0;

    // キューが空になるまでループ
    while (!q.empty()) {
        // キューの先頭を取り出す
        P p = q.front();
        q.pop();

        // 取り出して来た状態がゴールなら探索をやめる
        if (p.first == gy && p.second == gx) {
            break;
        }

        // 移動4方向ループ
        for (int i = 0; i < 4; i++) {
            // 移動した後の点を(nx, ny)とする
            int ny = p.first + dy[i], nx = p.second + dx[i];
            // 移動が可能かの判定とすでに訪れたことがあるかの判定
            // d[ny][nx] != INFなら訪れたことがある
            if (0 <= ny && ny < r && 0 <= nx && nx < c && maze[ny][nx] != '#' &&
                d[ny][nx] == INF) {
                // 移動できるならキューに入れ,その点の距離をpからの距離+1で確定する
                q.push(make_pair(ny, nx));
                d[ny][nx] = d[p.first][p.second] + 1;
            }
        }
    }
    cout << d[gy][gx] << endl;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> r >> c;
    cin >> sy >> sx;
    cin >> gy >> gx;
    sy--, sx--, gy--, gx--;
    for (int y = 0; y < r; y++) {
        for (int x = 0; x < c; x++) {
            cin >> maze[y][x];
        }
    }
    bfs();
    return 0;
}