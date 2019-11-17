#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e7;
const ll MOD = 1e9 + 7;
const int MAX = 101;

int n; // 行列の数
int m[MAX][MAX]; // m[i][j] := 行列iと行列jの最小の演算数
int p[MAX]; // p[i] := 行列iの行数(縦の長さ)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> p[i - 1] >> p[i];
    }

    for (int i = 1; i <= n; ++i) {
        m[i][i] = 0;
    }
    for (int l = 2; l <= n; ++l) { // 行列のlengthは2~n
        for (int i = 1; i <= n-l+1; ++i) { // iからn-l+1まで
            int j = i + l - 1;
            m[i][j] = (1 << 21);
            for (int k = i; k < j; ++k) { // m[i][j]を求める
                m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
            }
        }
    }

    cout << m[1][n] << endl;

    return 0;
}