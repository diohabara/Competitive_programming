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
    vector<ll> A(N + 2), B(N + 1);
    ll sum = 0;
    rep(i, N)
    {
        cin >> A[i + 1];
    }

    A[0] = A[N + 1] = 0;
    rep(i, N + 1)
    {
        B[i] = abs(A[i + 1] - A[i]);
    }
    for (auto& b : B) {
        sum += b;
    }
    rep(i, N)
    {
        cout << sum - (B[i] + B[i + 1]) + abs(A[i + 2] - A[i + 0]) << endl;
    }
    return 0;
}