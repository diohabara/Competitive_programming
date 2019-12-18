#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll a, b, c;
    cin >> a >> b >> c;
    ll cnt = 0;
    if (a == b && b == c) {
        if (a % 2 != 0 || b % 2 != 0 || c % 2 != 0) {
            cout << 0 << endl;
        } else {
            cout << -1 << endl;
        }
        return 0;
    }
    while (true) {
        if (a % 2 != 0 || b % 2 != 0 || c % 2 != 0) {
            cout << cnt << endl;
            return 0;
        }
        ll tmpa = a, tmpb = b, tmpc = c;
        a = (tmpb + tmpc) / 2;
        b = (tmpa + tmpc) / 2;
        c = (tmpa + tmpb) / 2;
        cnt++;
    }
    return 0;
}