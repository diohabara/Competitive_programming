#include<iostream>
#include<stack>
using namespace std;
static const int N = 100;
static const int WHITE = 0;  // 未訪問
static const int GRAY = 1;  // 訪問した
static const int BLACK = 2;  // 訪問完了

int n, M[N][N];
int color[N], d[N], f[N], tt;  // dは最初に訪問した時間，fは訪問完了した時間
int nt[N];

// uに隣接するvを番号順に取得
int next(int u)
{
    for (int v = nt[u]; v < n; v++) {
        nt[u] = v + 1;  // 頂点uより大きい頂点へ行けるか試す
        if (M[u][v]) {  // uからvへのパスがあればvを返す
            return v;
        }
    }
    return -1;
}

// スタックを用いた深さ優先探索
void dfs_visit(int r)
{
    for (int i = 0; i < n; i++) {
        nt[i] = 0;  // 頂点以上の大きさの
    }

    stack<int> S;
    S.push(r);
    color[r] = GRAY;  // 頂点rへ訪問したことにする
    d[r] = ++tt;  // 最初に訪問した時間

    while( !S.empty()) {  // スタックに要素があるとき
        int u = S.top();  // uをスタックの一番上の要素とする
        int v = next(u);  // vをuから行ける，uより大きい要素とする
        if (v != -1) {  // vが存在するとき
            if (color[v] == WHITE) {  // vに未訪問のとき
                color[v] = GRAY;  // vを訪問したことにする
                d[v] = ++tt;  // vに最初に訪問した時間を定める
                S.push(v);  // スタックにvを入れる
            }
        } else {  // vが存在しない時
            S.pop();  // Sの先頭の要素を削除
            color[u] = BLACK;  // uを訪問完了に
            f[u] = ++tt;  // uが訪問完了の時間を記録
        }
    }
}

void dfs()
{
    // 初期化
    for (int i = 0; i < n; i++) {
        color[i] = WHITE;
        nt[i] = 0;  //
    }
    tt = 0;
    // 未訪問のuを始点として深さ優先探索
    for (int u = 0; u < n; u++) {
        if (color[u] == WHITE) {
            dfs_visit(u);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " " << d[i] << " " << f[i] << endl;
    }
}

int main()
{
    int u, k, v;

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        u--;
        for (int j = 0; j < k; j++) {
            cin >> v;
            v--;
            M[u][v] = 1;
        }
    }

    dfs();

    return 0;
}