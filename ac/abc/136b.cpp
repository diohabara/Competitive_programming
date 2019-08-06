#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // input
    ll n;
    cin >> n;
    // output
    if (n < 9) {
        cout << n << endl;
    } else if (n < 100) {
        cout << 9 << endl;
    } else if (n < 1000) {
        cout << 9 + n - 99 << endl;
    } else if (n < 10000) {
        cout << 909 << endl;
    } else if (n < 100000) {
        cout << 909 + n - 9999 << endl;
    } else {
        cout << 90909 << endl;
    }
    return 0;
}