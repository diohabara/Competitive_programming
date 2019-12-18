#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll a, b, k, l;
    cin >> a >> b >> k >> l;
    if (l * a < b) {
        cout << k * a << endl;
    } else {
        if (k % l == 0) {
            cout << (k / l) * b << endl;
        } else {
            cout << min((k / l) * b + (k % l) * a, (k / l + 1) * b)  << endl;
        }
    }
    return 0;
}