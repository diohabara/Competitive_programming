#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N, M;
    cin >> N >> M;
    if (N == 1 || M == 1) {
        if (N == M) {
            cout << 1 << endl;
            return 0;
        } else {
            cout << max(N, M) - 2 << endl;
            return 0;
        }
    }
    cout << N * M - (2 * (N + M) - 4) << endl;
    return 0;
}