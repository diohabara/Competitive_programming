#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, h[100000], dp[100000] = {};
    cin >> n;
    REP(i, n) {
        cin >> h[i];
    }
    dp[1] = abs(h[1] - h[0]);
    LL ans = 0;
    for (int i = 2; i < n; i++) {
        dp[i] = min(abs(h[i] - h[i - 1]), abs(h[i] - h[i - 2]));
    }
    REP(i, n) {
        ans += dp[i];
    }
    cout << ans << endl;
    return 0;
}