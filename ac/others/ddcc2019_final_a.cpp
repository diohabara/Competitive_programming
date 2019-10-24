#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

double solve(int N, string S)
{
    double ans = 0.0; // 答え
    int cnt = 0, maxcnt = 0; // 現在の氷の連続数,今までの氷の最大連続数
    for (int i = 0; i < N; ++i) {
        if (S[i] == '-') {
            cnt = 0;
        } else {
            cnt++;
            maxcnt = max(maxcnt, cnt);
        }
        ans += 1.0 / (cnt + 1);
    }
    ans -= 1.0 - 1.0 / (maxcnt + 2);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    cin >> N;
    string S;
    cin >> S;
    cout.precision(15);
    cout << solve(N, S) << endl;
    return 0;
}