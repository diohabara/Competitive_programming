#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

ll fun(ll x)
{
    if (x % 2 == 0) {
        return x / 2;
    } else {
        return x * 3 + 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll P;
    cin >> P;
    ll end = 1789997546303ll;
    for (int i = 0; i < 1000 - P; ++i) {
        end = fun(end);
    }
    cout << end << endl;
    return 0;
}