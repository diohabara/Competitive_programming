#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
const ll len = 1e6 + 10;

bool is_prime[len];
ll ans = 0;
ll A, B;
int Eratosthenes(ll g)
{
    int res = 0;
    for (ll i = 2; i * i <= g; i++) {
        if (g % i != 0) {
            continue;
        }
        int num = 0;
        while (g % i == 0) {
            g /= i;
        }
        ++res;
    }
    if (g != 1) {
        ++res;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> A >> B;
    ll g = __gcd(A, B);
    ans = Eratosthenes(g);
    cout << ans + 1LL << endl;
    return 0;
}