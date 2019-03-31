#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    vector<ll> a;
    a.resize(n);
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans += a[i] - 1;
    }
    cout << ans << endl;
    return 0;
}