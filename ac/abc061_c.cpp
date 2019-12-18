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
    ll N, K;
    cin >> N >> K;
    vector<pair<ll, ll>> ab(N);
    ll cnt = 0;
    rep(i, N)
    {
        cin >> ab[i].first >> ab[i].second;
    }
    sort(ab.begin(), ab.end());
    rep(i, N) {
        cnt += ab[i].second;
        if (cnt >= K) {
            cout << ab[i].first << endl;
            return 0;
        }
    }

    return 0;
}