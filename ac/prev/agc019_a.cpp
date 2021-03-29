#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll q, h, s, d;
    cin >> q >> h >> s >> d;
    ll n;
    cin >> n;
    ll l = min(s, min(2 * h, 4 * q));
    if (l * 2 <= d) {
        cout << n * l << endl;
    } else {
        cout << n / 2 * d + n % 2 * l << endl;
    }
    return 0;
}