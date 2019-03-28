#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

#define MAX 100000

vector<int> G[MAX];
int N;
bool visited[MAX];
int prenum[MAX], parent[MAX], lowest[MAX], timer;

void dfs(int current, int prev)
// current:現在のノード，prev:親
{
    // ノードcurrentを訪問した直後の処理
    // prenum:今のノードの発見の順番
    // lowest:現在のノードと子孫のノードから行ける最小のノードが行ける値(ここでは暫定)
    prenum[current] = lowest[current] = timer;
    timer++; // 次のノードが通る時のためにインクリメント

    visited[current] = true; // 現在のノードに行ったことにする

    int next;

    for (int i = 0; i < G[current].size(); i++) { // 現在のノードから行けるノードをすべて周る
        next = G[current][i]; // 次のノードの値
        if (!visited[next]) { // 次のノードに行ったことがないとき
            // ノードcurrentからノードnextへ訪問する直前の処理
            parent[next] = current; // 現在のノードを次のノードの親とする

            dfs(next, current); // 次のノードでdfsを行う

            // ノードnextの探索が終了した直後の処理
            lowest[current] = min(lowest[current], lowest[next]);
        } else if (next != prev) { // 次のノードに行ったことがない∧次のノードが親でもないとき
            // エッジcurrent --> nextがBackedgeの場合の処理
            lowest[current] = min(lowest[current], prenum[next]);
        }
    }
    // ノードcurrentの探索が終了した直後の処理
}

void art_points()
{
    for (int i = 0; i < N; i++) {
        visited[i] = false; // すべての頂点に行ったことが無いとする
    }
    timer = 1;
    // lowestの計算
    dfs(0, -1); // 0 == root

    set<int> ap;
    int np = 0;
    for (int i = 1; i < N; i++) {
        // ノードiの親p
        int p = parent[i];
        if (p == 0) { // 親が根のときはnpをインクリメント
            np++;
        } else if (prenum[p] <= lowest[i]) { // もし親の発見の順番の方が早いときは親は関節点(親とつながっているのは自分だけだから)
            ap.insert(p);
        }
    }
    if (np > 1) {
        ap.insert(0); // 親が根のときは親を入れる
    }
    for (set<int>::iterator it = ap.begin(); it != ap.end(); it++) {
        cout << *it << endl; // 関節点を言う
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int m;
    cin >> N >> m; // N:頂点の数，m:辺の数

    for (int i = 0; i < m; i++) {
        int s, t; // 辺s<->t
        cin >> s >> t;
        // Gに経路を記録
        G[s].push_back(t);
        G[t].push_back(s);
    }
    art_points();

    return 0;
}