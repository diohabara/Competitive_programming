#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;
typedef tuple<ll, int, int> T;
const ll INF = 1e9;

int h, w, t; // 高さ，幅，制限時間
string s[12];
int sy, sx, gy, gx;

// x = mだと想定してdijkstra
bool dijkstra(int m)
{
    // それぞれの地点での最大の重さ
    ll dist[12][12];

    // 初期化
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            dist[i][j] = INF * 10; // mより大きな値で初期化しておく
        }
    }
    // スタート地点でのコストを0とする
    dist[sy][sx] = 0;

    // タイプTのpriority_queueを作っている
    // 小さい準に出力する
    priority_queue<T, vector<T>, greater<T> > q;
    // queueにコスト，startの座標を入れる
    q.push(make_tuple(0, sy, sx));
    // queueが空になるまで続ける
    while (!q.empty()) {
        ll c; // コスト
        int y, x; // 座標
        tie(c, y, x) = q.top(); // qに入っているコスト，座標を入れる
        q.pop(); // qの先頭を取り出す
        for (int i = 0; i < 4; i++) {
            // 入れられた座標の上下左右で探索
            int ny = y + dy[i], nx = x + dx[i];
            // もし新しい座標が座標外ならスキップ
            if (ny < 0 || h <= ny || nx < 0 || w <= nx) {
                continue;
            }
            if (s[ny][nx] == '#') { // もし黒いマスで
                if (dist[ny][nx] > c + m) { // 最小値が更新されたら
                    dist[ny][nx] = c + m;
                    q.push(make_tuple(c + m, ny, nx));
                }
            } else { // 黒いマス以外で最小値が更新されたら
                if (dist[ny][nx] > c + 1) {
                    dist[ny][nx] = c + 1;
                    q.push(make_tuple(c + 1, ny, nx));
                }
            }
        }
    }
    // ゴール地点で制限時間以内ならtrue
    if (dist[gy][gx] <= t) {
        return true;
    } else {
        return false;
    }
}

int main(void)
{
    cin >> h >> w >> t;
    for (int i = 0; i < h; i++) {
        cin >> s[i];
    }
    // スタートとゴールを設定
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == 'S') {
                sy = i;
                sx = j;
            } else if (s[i][j] == 'G') {
                gy = i;
                gx = j;
            }
        }
    }

    ll l = 1, r = INF;
    // 二分探索
    while (r - l > 1) {
        int x = (l + r) / 2;
        if (dijkstra(x)) { // もしdjikstraがtrueならそれよりも大きい値を探索する
            l = x;
        } else { // それ以外なら小さい値を探索する
            r = x;
        }
    }
    cout << l << endl; // 最終的に最もdijkstraがtrueになる最大の値が答え
    return 0;
}