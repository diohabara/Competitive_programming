#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
const ll INF = 1e9;
const ll MOD = 1e9 + 7;

ll factorial(ll num)
{
    ll sum = 1;
    for (ll i = 1; i <= num; ++i) {
        sum = sum * i % MOD;
    }
    return sum;
}
int main()
{
    ll N, M;
    cin >> N >> M;
    if (abs(N - M) > 1) {
        cout << 0 << endl;
    } else if (N != M) {
        cout << factorial(N) * factorial(M) % MOD << endl;
    } else {
        cout << 2 * factorial(N) * factorial(M) % MOD << endl;
    }
    return 0;
}