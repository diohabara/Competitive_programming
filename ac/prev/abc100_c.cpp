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
    ll cnt = 0;
    rep(i, N)
    {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            while (a[i] % 2 == 0) {
                a[i] /= 2;
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}