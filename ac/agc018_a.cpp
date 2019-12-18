#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
unsigned gcd(unsigned a, unsigned b) {
    while (1) {
        if (a < b) swap(a, b);
        if (!b) break;
        a %= b;
    }
    return a;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, k;
    cin >> n >> k;
    ll a[100000];
    rep(i, n) { cin >> a[i]; }
    ll g = a[0];
    ll m = a[0];
    for (int i = 1; i < n; i++) {
        g = gcd(g, a[i]);
        m = max(m, a[i]);
    }
    if (k <= m && k % g == 0) {
        puts("POSSIBLE");
    } else {
        puts("IMPOSSIBLE");
    }
    return 0;
}