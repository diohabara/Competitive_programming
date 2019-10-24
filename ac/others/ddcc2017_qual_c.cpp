#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N, C;
    cin >> N >> C;
    vector<ll> L(N);
    rep(i, N) { cin >> L[i]; }
    ll ptr = 0, ans = N;
    sort(L.begin(), L.end());
    for (int i = N - 1; i >= 0; --i) {
        if (i > ptr && L[i] + L[ptr] + 1 <= C) {
            L[ptr] = -1;
            ptr++;
            ans--;
        }
    }
    cout << ans << endl;
    return 0;
}