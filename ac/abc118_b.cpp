#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m, k, a, cnt[31] = {}, ans = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> k;
        for (int j = 0; j < k; j++) {
            cin >> a;
            ++cnt[a];
        }
    }
    for (int i = 0; i <= m; i++) {
        if (cnt[i] == n) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}