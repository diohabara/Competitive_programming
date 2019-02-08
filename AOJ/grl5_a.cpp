#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;
#define MAX 100000
#define INFTY (1 << 30)

class Edge {
public:
    int t, w;
    Edge(){}
    Edge(int t, int w): t(t), w(w) {}
};

vector<Edge> G[MAX]; // Gはグラフで行き先と重みを持っている
int n, d[MAX]; // d:距離

bool vis[MAX];
int cnt;

void bfs(int s)
{
    for (int i = 0; i < n; i++) {
        d[i] = INFTY; // すべての節点を通ったことにする
    }
    queue<int> Q; // キューQを作る
    Q.push(s); // Qに引数qを入れる
    d[s] = 0; // sには通ったことにする
    int u;
    while(!Q.empty()) { // Qの中身がゼロでないとき
        // uをQに最初に入れたデータを取り出す
        u = Q.front();
        Q.pop();
        for (int i = 0; i < G[u].size(); i++) {
            // dをエッジ構造のものとする
            Edge e = G[u][i]; // eを頂点uから行けるグラフでまだ通ったことがないものとする
            if (d[e.t] == INFTY) {  // もしsの距離が
                d[e.t] = d[u] + e.w;
                Q.push(e.t);
            }
        }
    }
}

void solve()
{
    // 適当な始点sから最も遠い節点tgtを求める
    bfs(0);
    int maxv = 0;
    int tgt = 0;
    for (int i = 0; i < n;i++) {
        if (d[i] == INFTY) {
            continue;
        }
        if (maxv < d[i]) {
            maxv = d[i];
            tgt = i;
        }
    }
    // tgt から最も遠い節点の距離maxvを求める
    bfs(tgt);
    maxv = 0;
    for (int i = 0; i < n; i++) {
        if (d[i] == INFTY) {
            continue;
        }
        maxv = max(maxv, d[i]);
    }

    cout << maxv << endl;
}


int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int s, t, w;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s >> t >> w;

        // 無向グラフだからGに両方への行き先を入れて，重みを入力している
        G[s].push_back(Edge(t, w));
        G[t].push_back(Edge(s, w));
    }
    solve();
}