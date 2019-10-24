#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1 << LLONG_MAX;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    rep(i, N) { cin >> A[i]; }
    ll ans = 0;
    ll mul = K * (K - 1) / 2 % MOD;
    for (int i = 0; i < N; ++i) {
        ll right = 0, left = 0;

        for (int j = i + 1; j < N; ++j) {
            if (A[i] > A[j]) {
                right++; // A[i]より小さい右側の数
            }
        }
        ans = (ans + K * right) % MOD;

        for (int j = 0; j <= i - 1; ++j) {
            if (A[i] > A[j]) {
                left++; // A[i]より小さい数全ての個数
            }
        }
        ans = (ans + (right + left) * mul) % MOD;
    }
    cout << ans << endl;
    return 0;
}