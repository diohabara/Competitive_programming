#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

static const int MMAX = 20;
static const int NMAX = 500000;
static const int INFTY = (1 << 29);

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    // C[i]:i番目のコインの値
    // T[i]:i円に必要なコインの最小枚数
    int C[21];
    int T[NMAX + 1];

    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        cin >> C[i];  // C[i]:i番目のコイン
    }

    for (int i = 0; i <= NMAX; i++) {
        T[i] = INFTY;  // Tを初期化
    }
    T[0] = 0;
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j + C[i] <= n; j++) {
            T[j + C[i]] =
                min(T[j + C[i]],
                    T[j] + 1);  // j + C[i]のときに必要なコインの枚数:min(j +
                                // C[i]のときに必要なコインの枚数，jのときに必要なコインの枚数
                                // + 1)
        }
    }

    cout << T[n] << endl;

    return 0;
}