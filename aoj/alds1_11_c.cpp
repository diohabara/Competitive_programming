#include<iostream>
#include<queue>

using namespace std;
static const int N = 100;
static const int INFTY = (1<<21);

int n, M[N][N];
int d[N];  // 距離で訪問状態(color)を管理する

void bfs(int s)
{
    queue<int> q;  // 標準ライブラリのqueueを使用
    q.push(s);
    for (int i = 0; i < n; i++) {
        d[i] = INFTY;  // 距離を十分に大きい値に初期化する
    }
    d[s] = 0;  // s(始点)の距離を0とする
    int u;
    while(!q.empty()) {  // キューにキーがある限り実行
        u = q.front();  // キューの一番上の要素をuにして
        q.pop();  // 削除
        for (int v = 0; v < n; v++) {
            if (M[u][v] == 0) {  // uからvへのパスがなければ次へ
                continue;
            }
            if (d[v] != INFTY) {  // 距離が十分に大きくなければ次へ
                continue;
            }
            d[v] = d[u] + 1;  // d[v]にd[u]の距離+1を入れる
            q.push(v);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " " << ((d[i] == INFTY) ? (-1) : d[i]) << endl;
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

    bfs(0);

    return 0;
}