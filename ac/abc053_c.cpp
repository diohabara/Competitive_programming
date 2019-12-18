#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)
const ll INF = 1e9;
const ll MOD = 1e9 + 7;
int main()
{
    ll n;
    cin >> n;
    ll ans = (n / 11) * 2;
    if (n % 11 > 6) {
        cout << ans + 2 << endl;
    } else if (n % 11 > 0) {
        cout << ans + 1 << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}