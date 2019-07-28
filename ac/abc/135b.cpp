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
    vector<ll> p(n);
    rep(i, n) { cin >> p[i]; }
    // output
    vector<ll> sub = p;
    sort(ALL(sub));
    int cnt = 0;
    rep(i, sub.size()){
        if (sub[i] != p[i]) {
            cnt++;
        }
    }
    if (cnt <= 2) {
        puts("YES");
    } else {
        puts("NO");
    }
    return 0;
}