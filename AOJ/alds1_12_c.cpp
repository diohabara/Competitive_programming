#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;
static const int MAX = 10000;
static const int INFTY = (1 << 20);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n;
vector<pair<int, int> > adj[MAX]; // 重み付き有向グラフの隣接リスト表現(重み，位置)
void dijkstra()
{
    priority_queue<pair<int, int> > PQ; // 優先度付きキューPQを設定
    int color[MAX]; // 訪問状態
    int d[MAX]; // 最短コストを初期化
    for (int i = 0; i < n; i++) {
        d[i] = INFTY; // 最短コストを初期化
        color[i] = WHITE; // 訪問状態を初期化
    }
    // 始点の最短コスト，訪問状態
    d[0] = 0;
    PQ.push(make_pair(0, 0));
    color[0] = GRAY;

    while (!PQ.empty()) {
        pair<int, int> f = PQ.top();
        PQ.pop();
        int u = f.second; // 現在の位置にPQの先頭の位置を代入

        color[u] = BLACK; // uは訪問完了に

        //最小値を取り出し，それが最短でなければ無視
        if (d[u] < f.first * (-1)) {
            continue;
        }

        for (int j = 0; j < adj[u].size(); j++) {
            int v = adj[u][j].first; // vはu->jの重み
            if (d[v] > d[u] + adj[u][j].second) { // vまでの重さと，uまでの重さとu->jの重さを比べる
                d[v] = d[u] + adj[u][j].second;
                // priority_queueはデフォルトで大きい値を優先するため-1をかける
                PQ.push(make_pair(d[v] * (-1), v));
                color[v] = GRAY;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << i << " " << (d[i] == INFTY ? -1 : d[i]) << endl;
    }
}
int main()
{
    int k, u, v, c;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            cin >> v >> c;
            adj[u].push_back(make_pair(v, c));
        }
    }

    dijkstra();

    return 0;
}