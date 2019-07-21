#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // input
    ll N, M;
    cin >> N >> M;
    vector<ll> a(N);
    vector<pair<ll, ll>> cb(M);
    rep(i, N) { cin >> a[i]; }
    rep(i, M) { cin >> cb[i].second >> cb[i].first; }
    // output
    sort(a.begin(), a.end());
    sort(cb.rbegin(), cb.rend());
    int i = 0, j = 0;
    while (i < N && j < M) {
        ll tmp = 0;
        while (a[i] < cb[j].first && tmp < cb[j].second) {
            a[i] = cb[j].first;
            i++;
            tmp++;
        }
        j++;
    }
    ll ans = accumulate(a.begin(), a.end(), 0ll);
    cout << ans << endl;
    return 0;
}