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
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    rep(i, N)
    {
        ll a;
        cin >> a;
        A[--a]++;
    }
    sort(A.rbegin(), A.rend());
    ll sub = 0;
    rep(i, K)
    {
        sub += A[i];
    }
    cout << N - sub << endl;
    return 0;
}