#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // input
    ll N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N)
    {
        cin >> A[i];
    }
    // output
    vector<ll> B = A;
    sort(B.rbegin(), B.rend());
    ll m = B[0], s = B[1];
    rep(i, N)
    {
        if (A[i] == m) {
            cout << s << endl;
        } else {
            cout << m << endl;
        }
    }
    return 0;
}