#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> t;
    t.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    ll ans = (1 << 29);
    for (int bit = 0; bit < (1 << n); bit++) {
        ll min1 = 0, min2 = 0;
        for (int i = 0; i < n; i++) {
            if (bit & (1 << i)) {
                min1 += t[i];
            } else {
                min2 += t[i];
            }
        }
        ans = min(ans, max(min1, min2));
    }
    cout << ans << endl;
    return 0;
}