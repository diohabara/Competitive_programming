#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    bool t[123456];
    int a[123456];
    rep(i, n) { t[i] = true; }
    rep(i, m) { cin >> a[i]; }
    for (int i = 0; i < m; i++) {
        if (t[a[m - 1 - i] - 1]) {
            cout << a[m - 1 - i] << endl;
            t[a[m - 1 - i] - 1] = false;
        }
    }
    for (int i = 0; i < n; i++) {
        if (t[i]) {
            cout << i + 1 << endl;
        }
    }
    return 0;
}