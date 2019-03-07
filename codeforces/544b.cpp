#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    int d[200000];
    for (int i = 0; i < n; i++) {
        cin >> d[i];
        d[i] %= k;
    }
    int cnt[100] = {};
    for (int i = 0; i < n; i++) {
        cnt[d[i]]++;
    }
    int ans = 0;
    if (k % 2 == 0) {
        ans += cnt[0] / 2 + cnt[k / 2] / 2;
        for (int i = 1; i < k / 2; i++) {
            ans += min(cnt[i], cnt[k - i]);
        }
    } else {
        ans += cnt[0] / 2;
        for (int i = 1; i <= k / 2; i++) {
            ans += min(cnt[i], cnt[k - i]);
        }
    }
    cout << ans * 2 << endl;
    return 0;
}