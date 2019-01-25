#include<iostream>
using namespace std;
static const int  N = 100;

int main()
{
    int M[N][N];  // オリジンの隣接行列
    int n, u, k, v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = 0;
        }
    }

    // 頂点iが頂点jへのパスが存在するということ
    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        u--;  // 0オリジンへの変換
        for (int j = 0; j < k; j++) {
            cin >> v;
            v--;  // 0オリジンへの変換
            M[u][v] = 1;  // uとvの間に辺を張る
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j) {
                cout << " ";
            }
            cout << M[i][j];
        }
        cout << endl;
    }

    return 0;
}