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
    ll n;
    cin >> n;
    vector<ll> h(n);
    rep(i, n) { cin >> h[i]; }
    // output
    ll tmp = h[0];
    rep(i, n - 1)
    {
        if (tmp - h[i+1]>= 2) {
            puts("No");
            return 0;
        }
        tmp = max(h[i + 1], tmp);
    }
    puts("Yes");
    return 0;
}