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
    string s;
    cin >> s;
    // output
    ll x1, x2, x3, y1, y2, y3;
    x1 = 0, y1 = 0;
    x2 = stoll(s), y2 = 0;
    x3 = 0, y3 = 1;
    printf("%lld %lld %lld %lld %lld %lld\n", x1, y1, x2, y2, x3, y3);
    return 0;
}