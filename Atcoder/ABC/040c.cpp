#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
#define INF (1 << 21);
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, a[100000];
    cin >> n;
    REP(i, n)
    {
        cin >> a[i];
    }
    int dp[100000] = {};
    dp[1] = abs(a[1] - a[0]);
    dp[2] = min(abs(a[2] - a[1]), dp[1]);
    for (int i = 2; i < n; i++) {
        dp[i] = min(abs(a[i] - a[i - 2]) + dp[i - 2], abs(a[i] - a[i - 1]) + dp[i - 1]);
    }
    cout << dp[n - 1] << endl;
    return 0;
}