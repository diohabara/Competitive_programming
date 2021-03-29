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
    vector<ll> M(N);
    ll sum = 0;
    rep(i, N)
    {
        cin >> A[i];
        sum += A[i];
    }
    M[0] = sum;
    for (int i = 1; i < N; i += 2) {
        M[0] -= 2 * A[i];
    }
    for (int i = 1; i < N; i++) {
        M[i] = 2 * A[i - 1] - M[i - 1];
    }
    rep(i, N)
    {
        cout << (i == 0 ? "" : " ") << M[i];
    }
    cout << endl;
    return 0;
}