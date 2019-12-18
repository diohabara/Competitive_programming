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
    ll ans = 0;
    ll a[300000];
    for (int i = 0; i < 3 * n; i++) {
        cin >> a[i];
    }
    sort(a, a + 3 * n);
    for (int i = 3 * n - 2; i >= n; i -= 2) {
        ans += a[i];
    }
    cout  << ans << endl;
    return 0;
}