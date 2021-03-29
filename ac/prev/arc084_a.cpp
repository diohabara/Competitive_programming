#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    cin >> N;
    vector<ll> A(N), B(N), C(N);
    rep(i, N)
    {
        cin >> A[i];
    }
    rep(i, N)
    {
        cin >> B[i];
    }
    rep(i, N)
    {
        cin >> C[i];
    }
    sort(A.begin(), A.end());
    sort(C.begin(), C.end());
    ll ans = 0;
    for(auto b: B) {
        ll i = lower_bound(A.begin(), A.end(), b) - A.begin();
        ll j = C.end() - upper_bound(C.begin(), C.end(), b);
        ans += i * j;
    }
    cout << ans << endl;
    return 0;
}