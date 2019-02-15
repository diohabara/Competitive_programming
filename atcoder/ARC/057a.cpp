#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll a, k;
    cin >> a >> k;
    ll cnt = 0;
    if (k == 0) {
        printf("%lld\n", (ll)(2 * pow(10, 12) - a));
        return 0;
    }
    while (a < (ll)2 * pow(10, 12)) {
        a = (k + 1) * a + 1;
        cnt++;
    }
    printf("%lld\n", cnt);
    return 0;
}