#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, m;
    ll ans = 0;
    cin >> n >> m;
    ans += min(n, m / 2);
    n -= ans;
    m -= ans * 2;
    ans += max((ll)0, m / 4);
    cout << ans << endl;
    return 0;
}