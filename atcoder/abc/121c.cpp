#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<pair<ll, ll> > v;
    v.resize(n);
    rep(i, n) { cin >> v[i].first >> v[i].second; }
    sort(v.begin(), v.end());
    ll ans = 0;
    rep(i, n) {
        if (v[i].second >= m) {
            ans += v[i].first * m;
            cout << ans << endl;
            return 0;
        } else {
            ans += v[i].first * v[i].second;
            m -= v[i].second;
        }
    }
    cout << ans << endl;
    return 0;
}