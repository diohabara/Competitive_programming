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
    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    ll l = n * m / gcd(n, m);
    ll g = gcd(n, m);
    for (int k = 0; k < g; k++) {
        if (s[m * k / g] != t[n * k / g]) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << l << endl;
    return 0;
}