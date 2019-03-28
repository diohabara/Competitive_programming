#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = 0;
    for (int i = a; i <= b; i++) {
        if (c <= i && i <= d) {
            ans += d - c;
        } else {
            ans += d - c + 1;
        }
    }
    cout << ans << endl;
    return 0;
}