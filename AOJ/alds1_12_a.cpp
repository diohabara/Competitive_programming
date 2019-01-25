#include <iostream>
using namespace std;
static const int MAX = 100;
static const int INFTY = (1 << 21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, M[MAX][MAX];

int prim()
{
    int u, minv;
    int d[MAX], p[MAX], color[MAX]; // dは重みが最小の辺の重み，pはMSTにおける頂点の親を，colorは訪問状態を記録

    for (int i = 0; i < n; i++) {
        d[i] = INFTY; // 重みは十分に大きい数で初期化
        p[i] = -1; // 親を初期化
        color[i] = WHITE; // 訪問してないということで初期化
    }

    d[0] = 0;

    while (1) {
        minv = INFTY;
        u = -1; // 最小の重みを持つ頂点
        for (int i = 0; i < n; i++) {
            if (minv > d[i] && color[i] != BLACK) { // d[i]が最小の重みより小さく，iをまだ通ったことがなければ
                u = i; // 頂点を更新する
                minv = d[i]; // 最小値を更新する
            }
        }
        if (u == -1) { // 最小値が更新されないときは終了
            break;
        }
        color[u] = BLACK; // 最小値を持つ頂点を訪問済みにする
        for (int v = 0; v < n; v++) {
            if (color[v] != BLACK & M[u][v] != INFTY) { // vが訪問済みでなく，uからvに行く重みが更新されているとき
                if (d[v] > M[u][v]) { // vの最小の重みがuからvへ行くときの重みより大きい時
                    d[v] = M[u][v]; // 最初の重みを更新
                    p[v] = u; // 頂点の親を変更する
                    color[v] = GRAY; // vを通ったことにする
                }
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (p[i] != -1) { // MSTにおける頂点の親が-1でなけれが
            sum += M[i][p[i]]; // iからp[i]までの重みをsumに加算する
        }
    }
    return sum;
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int e;
            cin >> e;
            M[i][j] = (e == -1) ? INFTY : e;
        }
    }

    cout << prim() << endl;

    return 0;
}