#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> L(N + 1), R(N + 1);
    rep(i, N) { cin >> A[i]; }
    vector<ll> B(A);
    reverse(B.begin(), B.end());
    rep(i, N)
    {
        L[i + 1] = __gcd(L[i], A[i]);
        R[i + 1] = __gcd(R[i], B[i]);
    }
    ll ans = 0;
    rep(i, N) {
        ans = max(ans, __gcd(L[i], R[N - i - 1]));
    }
    cout << ans << endl;
    return 0;
}