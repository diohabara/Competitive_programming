#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll x, y, k;
    cin >> x >> y >> k;
    if (y > k) {
        cout << x + k << endl;
    } else if (y < k) {
        cout << x + 2 * y - k << endl;
    } else {
        cout << x + y << endl;
    }
    return 0;
}