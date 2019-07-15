#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N, D;
    cin >> N >> D;
    ll X[15][15];
    rep(i, N)
    {
        rep(j, D)
        {
            cin >> X[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int area = 0;
            for (int k = 0; k < D; ++k) {
                area += (X[i][k] - X[j][k]) * (X[i][k] - X[j][k]);
            }
            for (int p = 0; p <= 200; ++p) {
                if (p * p == area) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}