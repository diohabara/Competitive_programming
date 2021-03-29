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
    vector<ll> a(N);
    vector<ll> color(9);
    rep(i, N)
    {
        cin >> a[i];
        if (a[i] < 3200)
            color[a[i] / 400]++;
        else
            color[8]++;
    }
    ll minA = 0, maxA = 0;
    rep(i, 8)
    {
        minA += min(color[i], 1ll);
        maxA += min(color[i], 1ll);
    }
    if (color[8] > 0) {
        maxA += color[8];
        if (color[7] == 0) {
            minA++;
        }
    }
    cout << minA << " " << maxA << endl;
    return 0;
}