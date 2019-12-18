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
    vector<ll> A(N + 1);
    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
    }
    // output
    vector<ll> B(N + 1);
    ll M = 0;
    for (int i = N; i > 0; --i) {
        int tmp = 0;
        for (int j = i; j <= N; j += i) {
            tmp += B[j];
        }
        if (tmp % 2 != A[i]) {
            M++;
            B[i]++;
        }
    }
    cout << M << endl;
    for (int i = 1; i <= N; ++i) {
        if (B[i] == 1) {
            cout << i << ' ';
        }
    }
    cout << endl;
    return 0;
}