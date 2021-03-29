#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, c, k;
    cin >> n >> c >> k;
    int ans = 0;
    ll t[100000];
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    sort(t, t + n);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (t[j] - t[i] > k || j - i + 1 > c) {
                ans++;
                // cout << t[i] << " " << t[j] << endl;
                i = j - 1;
                break;
            }
        }
    }
    cout << ans + 1 << endl;
    return 0;
}