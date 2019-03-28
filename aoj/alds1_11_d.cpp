#include<iostream>
#include<vector>
#include<stack>
using namespace std;
static const int MAX = 100000;
static const int NIL = -1;

int n;
vector<int> G[MAX];
int color[MAX];

void dfs(int r, int c)
{
    // 双方向に行ける頂点の集団の色をcとして，rを始点とする
    stack<int> S;
    S.push(r);
    color[r] = c;
    while(!S.empty()) {
        // rから行けるところなくなるまで深さ優先探索する
        int u = S.top();
        S.pop();
        for (int i = 0; i < G[u].size(); i++) {  // G[u].size()はuが行く可能性のある頂点の数だけ
            int v = G[u][i];  // vはuが行く可能性のある頂点
            if (color[v] == NIL) {
                // 配列colorで行く可能性のある頂点の色が埋まってなかったら
                // 行く可能性のある頂点の色をc(= id)とする
                // そしてvをSに格納する
                color[v] = c;
                S.push(v);
            }
        }
    }
}

void assignColor()
{
    // 双方向に行ける集団の色を同じにする
    int id = 1;
    for (int i = 0; i < n; i++) {
        color[i] = NIL;  // 配列colorを初期化
    }
    for (int u = 0; u < n; u++) {
        // 初期化したcolorに対して，深さ優先探索をする
        if (color[u] == NIL) {
            dfs(u, id++);
        }
    }
}

int main()
{
    int s, t, m, q;

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> s >> t;
        // 有向グラフの隣接リスト
        // s->tとt->s
        G[s].push_back(t);
        G[t].push_back(s);
    }

    assignColor();

    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> s >> t;
        if (color[s] == color[t]) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}