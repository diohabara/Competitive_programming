#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

// 0はdummy, 1:'A', 2:'C', 3:'G', 4:'T'
ll dp[101][5][5][5] = {}; // dp[i文字目まで][3文字前][2文字前][1文字前]

void add(ll& a, ll b)
{
    a += b;
    a %= MOD;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;

    dp[0][0][0][0] = 1;
    // except "AGC", "ACG", "GAC", "A?GC", "AG?C"
    rep(n, N)
    {
        rep(i, 5)
        {
            rep(j, 5)
            {
                rep(k, 5)
                {
                    for (int l = 1; l < 5; l++) {
                        if (i == 1 && j == 3 && l == 2)
                            continue;
                        if (i == 1 && k == 3 && l == 2)
                            continue;
                        if (j == 1 && k == 2 && l == 3)
                            continue;
                        if (j == 1 && k == 3 && l == 2)
                            continue;
                        if (j == 3 && k == 1 && l == 2)
                            continue;
                        add(dp[n + 1][j][k][l], dp[n][i][j][k]);
                    }
                }
            }
        }
    }
    ll res = 0;
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            for (int k = 1; k < 5; k++) {
                add(res, dp[N][i][j][k]);
            }
        }
    }
    cout << res << endl;

    return 0;
}