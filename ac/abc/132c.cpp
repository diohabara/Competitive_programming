#include <bits/stdc++.h>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    vector<ll> d(n);
    rep(i, n)
    {
        cin >> d[i];
    }
    ll abc = 0;
    ll cnt = 0;
    sort(d.begin(), d.end());
    cout << d[n / 2] - d[n / 2 - 1] << endl;
    return 0;
}