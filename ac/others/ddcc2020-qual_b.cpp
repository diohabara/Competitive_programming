#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    cin >> N;
    vector<ll> A(N);
    ll sum = 0;
    rep(i, N)
    {
        cin >> A[i];
        sum += A[i];
    }
    ll center = 0;
    ll ans = LLONG_MAX;
    for (int i = 0; i < N - 1; i++) {
        center += A[i];
        ll right = sum - center;
        ll need = abs(right - center);
        ans = min(ans, need);
    }
    cout << ans << endl;
    return 0;
}