#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;
static const int MAX = 100000;
static const int INFTY = (1 << 29);

vector<int> G[MAX]; // G[s] = tならs->のpath
list<int> out; // in次数が0になったものを先頭から入れる
bool V[MAX]; // Vertex
int N;
int indeg[MAX]; // indeg[u]ならuのin次数

void bfs(int s)
{
    queue<int> q; // キューqを設定
    q.push(s); // 入力sをキューに追加
    V[s] = true; // sのvectorをtrueとする
    while (!q.empty()) { // qが空になるまで続ける
        int u = q.front(); // uをqの先頭の要素とする
        q.pop(); // qの先頭を除去
        out.push_back(u); // in次数が0の頂点を連結リストにuを追加
        for (int i = 0; i < G[u].size(); i++) { // uから始まる有向グラフで
            int v = G[u][i]; // vをから行ける点とする
            indeg[v]--; // vの次数をデクリメント
            if (indeg[v] == 0 && !V[v]) { // もしvの次数が0で辺vを通ってないなら
                V[v] = true; // 辺vを通ったことにする
                q.push(v); // qにvを入力
            }
        }
    }
}

void tsort()
{
    for (int i = 0; i < N; i++) {
        indeg[i] = 0;  // 頂点iのin次数を0に設定する
    }

    for (int u = 0; u < N; u++) { // u=頂点
        for (int i = 0; i < G[u].size(); i++) { // i=uから伸びる有向グラフ
            int v = G[u][i];  // vをiから伸びる有向グラフの到着地点とする
            indeg[v]++; // vのin次数を増やす
        }
    }

    for (int u = 0; u < N; u++) { // u:頂点
        if (indeg[u] == 0 && !V[u]) { // 頂点uのin次数が0かつ頂点uを通ったことがない
            bfs(u); // uにおいて幅探索
        }
    }

    for (list<int>::iterator it = out.begin(); it != out.end(); it++) { // in次数が0になった頂点から出力
        cout << *it << endl;
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int s, t, M; // s, t:s->tのpath．M:辺の数

    cin >> N >> M; // N:頂点の数

    for (int i = 0; i < N; i++) {
        V[i] = false; // すべての辺をfalseとする
    }

    for (int i = 0; i < M; i++) {
        cin >> s >> t;
        G[s].push_back(t); // s->tを保存
    }

    tsort();

    return 0;
}