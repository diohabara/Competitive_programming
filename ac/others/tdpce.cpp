#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;
const int MOD = 1e9 + 7;
int a[20000];
int N, D;

int dp[2000][2][100];
int calc(int digit, int sml, int sum)
{
    // 桁は
    if (digit == N) {
        return (sum == 0);
    }
    if (~dp[digit][sml][sum]) {
        return dp[digit][sml][sum];
    }
    int ret = 0;
    for (int i = 0; i < 10; i++) {
        if (sml == 0 && a[digit] < i) {
            break;
        }
        int val;
        val = calc(digit + 1, sml | (a[digit] != i), (sum % i) % D);
        ret = (val + ret) % MOD;
    }
    return dp[digit][sml][sum] = ret;
}
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin >> D >> s;
    N = s.size();
    for (int i = 0; i < N; i++) {
        a[i] = s[i] - '0';
    }
    fill_n(**dp, 20000 * 2 * 100, -1);
    cout << (calc(0, 0, 0) + MOD - 1) % MOD << endl;
    return 0;
}