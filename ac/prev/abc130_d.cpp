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
    ll N, K;
    cin >> N >> K;
    vector<ll> a(N);
    rep(i, N) { cin >> a[i]; }
    vector<ll> b(N + 1, 0);
    rep(i, N)
    {
        b[i + 1] += b[i] + a[i];
    }
    ll l = 0, r = 0, cnt = 0;
    while(l <= N && r <= N) {
        if (b[r] - b[l] < K) {
            r++;
        } else {
            l++;
            cnt += N-r+1;
        }
    }
    cout << cnt << endl;
    return 0;
}