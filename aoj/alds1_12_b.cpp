#include <iostream>
using namespace std;
static const int MAX = 100;
static const int INFTY = (1 << 21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, M[MAX][MAX];

void dijkstra()
{
    int minv; // 最小のコスト
    int d[MAX], color[MAX]; // d[n]は始点からnまでの最短コスト，color[v]はvの訪問状態

    for (int i = 0; i < n; i++) {
        // 最短コストと訪問状態の初期化
        d[i] = INFTY;
        color[i] = WHITE;
    }

    d[0] = 0; // 始点から始点までの最短コストは0
    color[0] = GRAY; // 始点を訪問済みにする
    while (1) {
        minv = INFTY; // 最小コストをINFで初期化
        int u = -1; // 現在の頂点を初期化
        for (int i = 0; i < n; i++) {
            if (minv > d[i] && color[i] != BLACK) { // 訪問するコストが最小コストより小さく，未訪問のとき
                u = i; // 現在の頂点を変える
                minv = d[i]; // 最小コストを変える
            }
        }
        if (u == -1) {
            break;
        }
        color[u] = BLACK; // 最小コストの頂点へ進み，訪問済みとする
        for (int v = 0; v < n; v++) {
            if (color[v] != BLACK && M[u][v] != INFTY) { // vに訪問済みでなくu->vへのコストがINFでないとき
                if (d[v] > d[u] + M[u][v]) { // 「vへの最小コスト」より「現在までのコストと現在地からvまでのコストを加えたもの」のほうが小さい時
                    d[v] = d[u] + M[u][v]; // vまでのコストを更新
                    color[v] = GRAY; // vへ訪問済みとする
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << i << " " << (d[i] == INFTY ? -1 : d[i]) << endl;
    }
}

int main()
{
    cin >> n;
    //
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = INFTY;
        }
    }

    int k, c, u, v;
    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            cin >> v >> c;
            M[u][v] = c;
        }
    }

    dijkstra();

    return 0;
}
