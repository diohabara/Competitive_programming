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
    ll N;
    cin >> N;
    map<ll, ll> mp;
    rep(i, N)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }

    ll area = 0;
    ll fst = 0;
    for (auto& p : mp) {
        if (p.second < 2) {
            continue;
        }
        if (p.second >= 4) {
            area = max(area, p.first * p.first);
        }
        area = max(area, p.first * fst);
        fst = p.first;
    }
    cout << area << endl;
    return 0;
}