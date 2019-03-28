#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

ll gao(ll x, ll y) {
    if (x <= y) {
        return y - x;
    } else {
        return 2 + x - y;
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll x, y;
    cin >> x >> y;
    ll ans;
    ans = min(min(gao(x, y), gao(-x, y) + 1),
              min(gao(x, -y) + 1, gao(-x, -y) + 2));
    cout << ans << endl;
    return 0;
}