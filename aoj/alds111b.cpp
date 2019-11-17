#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1 << 21;
const ll MOD = 1e9 + 7;
static const int N = 100;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n; // 頂点の数
int M[N][N]; // グラフ
int color[N]; // 訪問状況
int d[N]; // 発見時刻
int f[N]; // 完了時刻
int tt; // 現在時刻
int nt[N]; // 隣接しているノード

// uに隣接するvを番号順に取得
int next(int u)
{
    for (int v = nt[u]; v < n; ++v) {
        nt[u] = v + 1; // M[u][v]があるときnt[u]=v+1となる
        if (M[u][v]) { // u->vに道があればvを返す
            return v;
        }
    }
    return -1;
}

// スタックを用いた深さ優先探索
void dfs_visit(int r)
{
    // ntを初期化
    for (int i = 0; i < n; ++i) {
        nt[i] = 0;
    }
    stack<int> S;
    S.push(r);
    color[r] = GRAY;
    d[r] = ++tt;

    while (!S.empty()) {
        int u = S.top();
        int v = next(u);
        if (v != -1) { // rから伸びるパスが会ったら
            if (color[v] == WHITE) { // まだ訪問したことがないノードのとき
                color[v] = GRAY; // ノードを訪問済みにする
                d[v] = ++tt; // 訪問済みのノードの時間を更新
                S.push(v); // 訪問済みのノードを格納する
            }
        } else { // rから伸びるパスがない時
            S.pop(); // スタックから取り出す
            color[u] = BLACK; // スタックの上にあるノードを訪問完了
            f[u] = ++tt; // 終了時間を更新
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int u, k, v;
    cin >> n;
    memset(M, 0, sizeof(M));

    for (int i = 0; i < n; ++i) {
        cin >> u >> k;
        u--;
        for (int j = 0; j < k; ++j) {
            cin >> v;
            v--;
            M[u][v] = 1;
        }
    }

    // 初期化
    for (int i = 0; i < n; ++i) {
        color[i] = WHITE;
        nt[i] = 0;
    }
    tt = 0;

    // 未訪問のuを始点として深さ優先探索
    for (int u = 0; u < n; ++u) {
        if (color[u] == WHITE) {
            dfs_visit(u);
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << i + 1 << " " << d[i] << " " << f[i] << endl;
    }

    return 0;
}